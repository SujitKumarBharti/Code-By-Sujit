insert_into(X, List, [X|List]).              % Helper insert
insert_into(X, [H|T], [H|Res]) :- insert_into(X, T, Res).

permute([], []).                             % Permutation: Empty list has empty permutation
permute([H|T], Perm) :-
    permute(T, SubPerm),
    insert_into(H, SubPerm, Perm).

sublist(Sub, List) :-                        % Sublist definition using append
    append(_, Rest, List),
    append(Sub, _, Rest).
