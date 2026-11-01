gcd(X, 0, X) :- X > 0.                       % gcd(X, 0) = X

gcd(X, Y, GCD) :-                            % gcd(X, Y) = gcd(Y, X mod Y)
    Y > 0,
    Rem is X mod Y,
    gcd(Y, Rem, GCD).
