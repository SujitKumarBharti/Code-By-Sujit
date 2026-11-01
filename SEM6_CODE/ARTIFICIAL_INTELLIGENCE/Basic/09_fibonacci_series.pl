fibonacci(0, 0).                             % F(0) = 0, F(1) = 1, F(N) = F(N-1) + F(N-2)
fibonacci(1, 1).

fibonacci(N, Fib) :-
    N > 1,
    N1 is N - 1,
    N2 is N - 2,
    fibonacci(N1, F1),
    fibonacci(N2, F2),
    Fib is F1 + F2.
