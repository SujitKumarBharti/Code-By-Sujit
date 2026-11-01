is_member(X, [X|_]).                         % A list is either empty [] or has a Head and a Tail [H|T]
is_member(X, [_|T]) :-                       % X is the head of the list
    is_member(X, T).                         % X belongs to the tail of the list
