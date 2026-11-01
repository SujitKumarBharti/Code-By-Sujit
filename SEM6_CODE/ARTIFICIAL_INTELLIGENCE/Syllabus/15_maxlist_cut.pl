maxlist_cut([X], X) :- !.                    % Rule definition
maxlist_cut([Head|Tail], Head) :-            % Rule definition
    maxlist_cut(Tail, TailMax),
    Head >= TailMax,
    !.                                       % Knowledge base relation
maxlist_cut([_|Tail], TailMax) :-            % Rule definition
    maxlist_cut(Tail, TailMax).              % Knowledge base relation
