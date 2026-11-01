remove_every_nth(List, N, Result) :-                     % Rule definition
    remove_acc(List, N, 1, Result).                      % Knowledge base relation

remove_acc([], _, _, []).                                % Knowledge base relation
remove_acc([_|Tail], N, N, Result) :-                    % Rule definition
    remove_acc(Tail, N, 1, Result).                      % Knowledge base relation
remove_acc([Head|Tail], N, Count, [Head|ResultTail]) :-  % Rule definition
    Count \= N,
    NextCount is Count + 1,
    remove_acc(Tail, N, NextCount, ResultTail).          % Knowledge base relation
