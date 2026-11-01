maximum(X, Y, X) :-                          % Rule definition
    X >= Y.                                  % Knowledge base relation
maximum(X, Y, Y) :-                          % Rule definition
    X < Y.                                   % Knowledge base relation
