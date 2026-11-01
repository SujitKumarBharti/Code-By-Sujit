max(X, Y, X) :-                              % Rule definition
    X >= Y.                                  % Knowledge base relation
max(X, Y, Y) :-                              % Rule definition
    Y > X.                                   % Knowledge base relation
