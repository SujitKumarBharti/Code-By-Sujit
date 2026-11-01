insert_elem(X, List, [X|List]).              % insert_elem(Item, List, ResultWithItemInserted)
insert_elem(X, [H|T], [H|ResultTail]) :-
    insert_elem(X, T, ResultTail).
