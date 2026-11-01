sumlist([], 0).                              % Knowledge base relation
sumlist([Head|Tail], Sum) :-                 % Rule definition
    sumlist(Tail, TailSum),
    Sum is Head + TailSum.                   % Knowledge base relation
