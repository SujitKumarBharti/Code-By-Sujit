edge(a, b).                                  % Directed Graph edges
edge(a, c).
edge(b, d).
edge(c, d).
edge(d, e).

connected(X, Y) :- edge(X, Y).               % Connected (undirected edge definition)
connected(X, Y) :- edge(Y, X).

has_path(X, Y) :- edge(X, Y).                % Simple Path:
has_path(X, Y) :-                            % Direct edge from Start to End
    edge(X, Z),                              % From X to Z, and path from Z to Y
    has_path(Z, Y).
