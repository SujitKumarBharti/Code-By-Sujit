split([], [], []).                           % Split list into two halves
split([X], [X], []).
split([X, Y | T], [X | L1], [Y | L2]) :-
    split(T, L1, L2).

merge_sorted([], L, L).                      % Merge two sorted lists
merge_sorted(L, [], L).
merge_sorted([H1|T1], [H2|T2], [H1|T]) :-
    H1 =< H2,
    merge_sorted(T1, [H2|T2], T).
merge_sorted([H1|T1], [H2|T2], [H2|T]) :-
    H1 > H2,
    merge_sorted([H1|T1], T2, T).

merge_sort([], []).                          % Merge Sort main predicate
merge_sort([X], [X]).
merge_sort(List, Sorted) :-
    List = [_, _ | _],
    split(List, L1, L2),
    merge_sort(L1, S1),
    merge_sort(L2, S2),
    merge_sorted(S1, S2, Sorted).
