maxlist([X], X).                                      % Knowledge base relation
maxlist([Head|Tail], Max) :-                          % Rule definition
    maxlist(Tail, TailMax),
    (Head >= TailMax -> Max = Head ; Max = TailMax).  % Knowledge base relation
