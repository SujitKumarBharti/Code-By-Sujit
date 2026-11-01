reverse_list(List, Reversed) :-              % Wrapper predicate
    rev_acc(List, [], Reversed).

rev_acc([], Acc, Acc).                       % When input list is empty, accumulator holds the reversed list

rev_acc([H|T], Acc, Reversed) :-             % Push Head onto Accumulator
    rev_acc(T, [H|Acc], Reversed).
