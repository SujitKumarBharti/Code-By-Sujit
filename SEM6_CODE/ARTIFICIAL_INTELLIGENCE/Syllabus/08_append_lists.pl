append_lists([], L2, L2).                            % Knowledge base relation
append_lists([Head|Tail], L2, [Head|ResultTail]) :-  % Rule definition
    append_lists(Tail, L2, ResultTail).              % Knowledge base relation
