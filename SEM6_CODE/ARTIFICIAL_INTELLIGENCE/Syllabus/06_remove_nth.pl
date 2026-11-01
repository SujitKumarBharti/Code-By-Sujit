remove_nth(1, [_|Tail], Tail).                      % Knowledge base relation
remove_nth(Pos, [Head|Tail], [Head|ResultTail]) :-  % Rule definition
    Pos > 1,
    NextPos is Pos - 1,
    remove_nth(NextPos, Tail, ResultTail).          % Knowledge base relation
