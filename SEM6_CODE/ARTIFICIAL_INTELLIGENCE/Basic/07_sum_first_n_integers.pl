sum_to_n(0, 0).                              % Sum of first 0 numbers is 0

sum_to_n(N, Sum) :-                          % Sum(N) = N + Sum(N-1)
    N > 0,
    N1 is N - 1,
    sum_to_n(N1, SubSum),
    Sum is N + SubSum.
