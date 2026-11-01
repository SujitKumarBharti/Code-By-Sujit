delete_elem(_, [], []).                      % Deleting from empty list gives empty list

delete_elem(X, [X|T], Result) :-             % If Head matches target X, skip it and continue deleting from Tail
    delete_elem(X, T, Result).

delete_elem(X, [H|T], [H|ResultTail]) :-     % If Head does NOT match X, retain Head and delete from Tail
    X \= H,
    delete_elem(X, T, ResultTail).
