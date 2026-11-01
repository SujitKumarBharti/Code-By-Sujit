queens(Queens) :-                                   % Board representation: A permutation of [1, 2, 3, 4, 5, 6, 7, 8]
    permutation([1, 2, 3, 4, 5, 6, 7, 8], Queens),  % where index represents column and value represents row.
    safe(Queens).                                   % queens(QueensPlacement)

safe([]).
safe([Queen|Others]) :-
    safe(Others),
    no_attack(Queen, Others, 1).

no_attack(_, [], _).
no_attack(Queen, [Other|Others], DiagonalOffset) :-
    Queen =\= Other + DiagonalOffset,
    Queen =\= Other - DiagonalOffset,
    NextOffset is DiagonalOffset + 1,
    no_attack(Queen, Others, NextOffset).
