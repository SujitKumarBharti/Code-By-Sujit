swap_adjacent([X, Y | T], [Y, X | T]) :-     % Swap adjacent elements if out of order
    X > Y.
swap_adjacent([H | T], [H | T1]) :-
    swap_adjacent(T, T1).

bubble_sort(List, Sorted) :-                 % Bubble sort repeat swaps until no further swap is possible
    swap_adjacent(List, NewList), !,
    bubble_sort(NewList, Sorted).
bubble_sort(Sorted, Sorted).
