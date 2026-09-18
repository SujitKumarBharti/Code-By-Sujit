#!/bin/bash

# ============================================================
# dsign.py - Automated Complete Test Suite
# ============================================================

BASE="$HOME/Downloads"
DSIGN="$BASE/dsign.py"
PRIVATE_KEY="$BASE/private_key.pem"
PUBLIC_KEY="$BASE/public_key.pem"
SOURCE="$BASE/org/testdata"
RESULT="$BASE/test-results"
LOG="$RESULT/test_all.log"

SIGNED="$RESULT/signed"
RENAMED="$RESULT/renamed"
COPIED="$RESULT/copied"
TAMPERED="$RESULT/tampered"

mkdir -p "$RESULT" "$SIGNED" "$RENAMED" "$COPIED" "$TAMPERED"

# Start clean test environment
rm -rf "$SIGNED" "$RENAMED" "$COPIED" "$TAMPERED"
mkdir -p "$SIGNED" "$RENAMED" "$COPIED" "$TAMPERED"

: > "$LOG"

# ------------------------------------------------------------
# Terminal prompt
# ------------------------------------------------------------

prompt() {
    echo "┌──(bsilent㉿bsilent)-[~/Downloads]"
    echo "└─$ $1"
}

# ------------------------------------------------------------
# Run command and record exact terminal-style output
# ------------------------------------------------------------

run_cmd() {
    local CMD="$1"

    prompt "$CMD" | tee -a "$LOG"

    echo | tee -a "$LOG"

    eval "$CMD" 2>&1 | tee -a "$LOG"

    local RC=${PIPESTATUS[0]}

    echo | tee -a "$LOG"

    return $RC
}

# ------------------------------------------------------------
# Test variables
# ------------------------------------------------------------

PASS=0
FAIL=0
SKIP=0

SUPPORTED=(
    "*.jpg"
    "*.jpeg"
    "*.png"
    "*.gif"
    "*.bmp"
    "*.pdf"
    "*.docx"
    "*.xlsx"
    "*.pptx"
    "*.zip"
)

echo "============================================================" | tee -a "$LOG"
echo "              DSIGN COMPLETE AUTOMATED TEST" | tee -a "$LOG"
echo "============================================================" | tee -a "$LOG"
echo | tee -a "$LOG"

echo "Source directory : $SOURCE" | tee -a "$LOG"
echo "Results directory: $RESULT" | tee -a "$LOG"
echo | tee -a "$LOG"

# ------------------------------------------------------------
# Check required files
# ------------------------------------------------------------

if [ ! -f "$DSIGN" ]; then
    echo "ERROR: dsign.py not found." | tee -a "$LOG"
    exit 1
fi

if [ ! -f "$PRIVATE_KEY" ]; then
    echo "ERROR: private_key.pem not found." | tee -a "$LOG"
    exit 1
fi

if [ ! -f "$PUBLIC_KEY" ]; then
    echo "ERROR: public_key.pem not found." | tee -a "$LOG"
    exit 1
fi

if [ ! -d "$SOURCE" ]; then
    echo "ERROR: $SOURCE not found." | tee -a "$LOG"
    exit 1
fi

# ------------------------------------------------------------
# Supported file test
# ------------------------------------------------------------

for PATTERN in "${SUPPORTED[@]}"; do

    shopt -s nullglob
    FILES=( "$SOURCE"/$PATTERN )
    shopt -u nullglob

    for FILE in "${FILES[@]}"; do

        NAME="$(basename "$FILE")"
        EXT="${NAME##*.}"
        BASENAME="${NAME%.*}"

        echo "============================================================" | tee -a "$LOG"
        echo "TESTING FILE: $NAME" | tee -a "$LOG"
        echo "============================================================" | tee -a "$LOG"
        echo | tee -a "$LOG"

        # ----------------------------------------------------
        # 1. SIGN
        # ----------------------------------------------------

        SIGN_CMD="python dsign.py sign -privatekey $PRIVATE_KEY -file $FILE"

        if run_cmd "$SIGN_CMD"; then

            GENERATED="$SOURCE/${BASENAME}_signed.${EXT}"

            if [ -f "$GENERATED" ]; then

                mv "$GENERATED" "$SIGNED/${BASENAME}_signed.${EXT}"

                echo "✓ SIGN TEST PASS" | tee -a "$LOG"
                PASS=$((PASS + 1))

            else

                echo "✗ SIGN TEST FAIL: Signed file was not created." | tee -a "$LOG"
                FAIL=$((FAIL + 1))
                continue

            fi

        else

            echo "✗ SIGN COMMAND FAILED" | tee -a "$LOG"
            FAIL=$((FAIL + 1))
            continue

        fi

        echo | tee -a "$LOG"

        # ----------------------------------------------------
        # 2. CHECK SIGNED FILE
        # ----------------------------------------------------

        SIGNED_FILE="$SIGNED/${BASENAME}_signed.${EXT}"

        CHECK_SIGNED="python dsign.py check -publickey $PUBLIC_KEY -file $SIGNED_FILE"

        if run_cmd "$CHECK_SIGNED"; then
            echo "✓ ORIGINAL SIGNED FILE: VALID" | tee -a "$LOG"
            PASS=$((PASS + 1))
        else
            echo "✗ ORIGINAL SIGNED FILE: INVALID" | tee -a "$LOG"
            FAIL=$((FAIL + 1))
        fi

        # ----------------------------------------------------
        # 3. RENAME
        # ----------------------------------------------------

        RENAMED_FILE="$RENAMED/${BASENAME}_renamed.${EXT}"

        RENAME_CMD="cp $SIGNED_FILE $RENAMED_FILE"

        run_cmd "$RENAME_CMD"

        CHECK_RENAMED="python dsign.py check -publickey $PUBLIC_KEY -file $RENAMED_FILE"

        if run_cmd "$CHECK_RENAMED"; then
            echo "✓ RENAMED FILE: VALID" | tee -a "$LOG"
            PASS=$((PASS + 1))
        else
            echo "✗ RENAMED FILE: INVALID" | tee -a "$LOG"
            FAIL=$((FAIL + 1))
        fi

        # ----------------------------------------------------
        # 4. COPY
        # ----------------------------------------------------

        COPIED_FILE="$COPIED/${BASENAME}_copied.${EXT}"

        COPY_CMD="cp $RENAMED_FILE $COPIED_FILE"

        run_cmd "$COPY_CMD"

        CHECK_COPIED="python dsign.py check -publickey $PUBLIC_KEY -file $COPIED_FILE"

        if run_cmd "$CHECK_COPIED"; then
            echo "✓ COPIED FILE: VALID" | tee -a "$LOG"
            PASS=$((PASS + 1))
        else
            echo "✗ COPIED FILE: INVALID" | tee -a "$LOG"
            FAIL=$((FAIL + 1))
        fi

        # ----------------------------------------------------
        # 5. TAMPER
        # ----------------------------------------------------

        TAMPERED_FILE="$TAMPERED/${BASENAME}_tampered.${EXT}"

        TAMPER_COPY="cp $COPIED_FILE $TAMPERED_FILE"

        run_cmd "$TAMPER_COPY"

        # Tamper exactly one byte.
        TAMPER_CMD="python3 -c \"from pathlib import Path; p=Path('$TAMPERED_FILE'); d=bytearray(p.read_bytes()); i=len(d)//2; d[i]^=1; p.write_bytes(d)\""

        run_cmd "$TAMPER_CMD"

        CHECK_TAMPERED="python dsign.py check -publickey $PUBLIC_KEY -file $TAMPERED_FILE"

        echo "Expected result: SIGNATURE INVALID" | tee -a "$LOG"
        echo | tee -a "$LOG"

        if run_cmd "$CHECK_TAMPERED"; then

            echo "✗ TAMPER TEST FAIL: Signature remained valid!" | tee -a "$LOG"
            FAIL=$((FAIL + 1))

        else

            echo "✓ TAMPER TEST PASS: Modification detected." | tee -a "$LOG"
            PASS=$((PASS + 1))

        fi

        echo | tee -a "$LOG"

    done
done

# ------------------------------------------------------------
# Unsupported files
# ------------------------------------------------------------

if [ -f "$SOURCE/README.txt" ]; then

    echo "============================================================" | tee -a "$LOG"
    echo "UNSUPPORTED FILE TEST" | tee -a "$LOG"
    echo "============================================================" | tee -a "$LOG"

    prompt "python dsign.py sign -privatekey $PRIVATE_KEY -file $SOURCE/README.txt" | tee -a "$LOG"

    echo "[EXPECTED] Unsupported file type should be rejected." | tee -a "$LOG"
    echo | tee -a "$LOG"

    if python "$DSIGN" sign \
        -privatekey "$PRIVATE_KEY" \
        -file "$SOURCE/README.txt" >> "$LOG" 2>&1; then

        echo "✗ UNSUPPORTED FILE TEST FAIL" | tee -a "$LOG"
        FAIL=$((FAIL + 1))

    else

        echo "✓ UNSUPPORTED FILE REJECTED" | tee -a "$LOG"
        PASS=$((PASS + 1))

    fi

    echo | tee -a "$LOG"
fi

# ------------------------------------------------------------
# Final tree
# ------------------------------------------------------------

echo "============================================================" | tee -a "$LOG"
echo "FINAL TEST DIRECTORY TREE" | tee -a "$LOG"
echo "============================================================" | tee -a "$LOG"
echo | tee -a "$LOG"

prompt "tree ~/Downloads/test-results" | tee -a "$LOG"
echo | tee -a "$LOG"

tree "$RESULT" 2>&1 | tee -a "$LOG"

echo | tee -a "$LOG"

# ------------------------------------------------------------
# Final summary
# ------------------------------------------------------------

echo "============================================================" | tee -a "$LOG"
echo "                    TEST SUMMARY" | tee -a "$LOG"
echo "============================================================" | tee -a "$LOG"

echo | tee -a "$LOG"
echo "PASS : $PASS" | tee -a "$LOG"
echo "FAIL : $FAIL" | tee -a "$LOG"
echo "SKIP : $SKIP" | tee -a "$LOG"
echo | tee -a "$LOG"

echo "Complete log:" | tee -a "$LOG"
echo "$LOG" | tee -a "$LOG"

echo "============================================================" | tee -a "$LOG"

if [ "$FAIL" -eq 0 ]; then
    exit 0
else
    exit 1
fi
