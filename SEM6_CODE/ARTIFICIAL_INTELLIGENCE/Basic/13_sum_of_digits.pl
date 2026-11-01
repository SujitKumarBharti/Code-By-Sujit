sum_digits(N, N) :-                          % Single digit sum is itself
    N >= 0, N < 10.

sum_digits(N, Sum) :-                        % Sum = LastDigit + Sum(RemainingDigits)
    N >= 10,
    LastDigit is N mod 10,
    Remaining is N // 10,
    sum_digits(Remaining, SubSum),
    Sum is LastDigit + SubSum.
