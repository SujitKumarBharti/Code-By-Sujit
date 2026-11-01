fib(0, 0).                                   % Knowledge base relation
fib(1, 1).                                   % Knowledge base relation
fib(N, Result) :-                            % Rule definition
    N > 1,
    N1 is N - 1,
    N2 is N - 2,
    fib(N1, R1),
    fib(N2, R2),
    Result is R1 + R2.                       % Knowledge base relation
