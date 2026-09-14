import hashlib

def digital_signature():
    text = input("Enter message: ")
    algorithm = input("Enter hash algorithm (md5/sha1/sha256): ").lower()
    choice = input("Enter s for Sign or v for Verify: ").lower()

    try:
        h = hashlib.new(algorithm)
    except ValueError:
        print("Invalid hash algorithm")
        return

    h.update(text.encode())
    hash_value = h.hexdigest()

    print("Hash:", hash_value)

    # RSA parameters
    p = 61
    q = 53
    n = p * q
    phi = (p - 1) * (q - 1)

    e = 17
    d = 0
    for number in range(1, phi):
        if (e * number) % phi == 1:
            d = number
            break

    hash_number = int(hash_value, 16) % n

    if choice == "s":
        signature = pow(hash_number, d, n)

        print("Digital Signature:", signature)

    elif choice == "v":
        signature = int(input("Enter digital signature: "))

        verified_hash = pow(signature, e, n)

        if verified_hash == hash_number:
            print("Signature Verified")
        else:
            print("Signature Invalid")

    else:
        print("Invalid choice")


digital_signature()