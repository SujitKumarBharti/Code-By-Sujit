factorial(0, 1).                             % 0! = 1

factorial(N, Fact) :-                        % N! = N * (N - 1)!
    N > 0,
    N1 is N - 1,
    factorial(N1, SubFact),
    Fact is N * SubFact.
