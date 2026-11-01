parent(aja, dasharatha).                     % Demonstrates base case and recursive rule definition
parent(dasharatha, ram).
parent(ram, luv).
parent(ram, kush).

ancestor(A, D) :-                            % An immediate parent is an ancestor
    parent(A, D).

ancestor(A, D) :-                            % If A is a parent of P, and P is an ancestor of D
    parent(A, P),
    ancestor(P, D).
