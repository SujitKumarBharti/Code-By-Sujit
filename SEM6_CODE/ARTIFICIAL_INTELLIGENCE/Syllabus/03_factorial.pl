factorial(0, 1).                             % Knowledge base relation
factorial(N, F) :-                           % Rule definition
    N > 0,
    N1 is N - 1,
    factorial(N1, F1),
    F is N * F1.                             % Knowledge base relation
