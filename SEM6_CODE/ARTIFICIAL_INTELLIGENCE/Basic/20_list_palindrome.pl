rev_acc([], Acc, Acc).                             % A list is a palindrome if it is identical to its reverse.
rev_acc([H|T], Acc, R) :- rev_acc(T, [H|Acc], R).  % Helper reverse predicate with accumulator

is_palindrome_list(List) :-
    rev_acc(List, [], List).
