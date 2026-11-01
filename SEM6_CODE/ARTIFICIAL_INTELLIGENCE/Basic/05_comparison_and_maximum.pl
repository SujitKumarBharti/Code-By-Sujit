max_two(A, B, A) :- A >= B.                  % Relational operators: > , < , >= , =< , =:= (equal), =\= (not equal)
max_two(A, B, B) :- B > A.

min_two(A, B, A) :- A =< B.
min_two(A, B, B) :- B < A.

max_three(A, B, C, Max) :-
    max_two(A, B, M1),
    max_two(M1, C, Max).
