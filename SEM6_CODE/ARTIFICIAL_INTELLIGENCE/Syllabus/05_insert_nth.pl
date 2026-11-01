insert_nth(Item, 1, List, [Item|List]).                   % Knowledge base relation
insert_nth(Item, Pos, [Head|Tail], [Head|ResultTail]) :-  % Rule definition
    Pos > 1,
    NextPos is Pos - 1,
    insert_nth(Item, NextPos, Tail, ResultTail).          % Knowledge base relation
