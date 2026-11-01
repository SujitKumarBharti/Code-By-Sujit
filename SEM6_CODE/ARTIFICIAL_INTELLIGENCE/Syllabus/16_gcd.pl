gcd(X, 0, X) :- !.                           % Rule definition
gcd(X, Y, Result) :-                         % Rule definition
    Rem is X mod Y,
    gcd(Y, Rem, Result).                     % Knowledge base relation
