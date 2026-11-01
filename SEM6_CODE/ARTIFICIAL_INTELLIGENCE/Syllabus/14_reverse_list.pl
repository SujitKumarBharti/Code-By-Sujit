reverse_list([], []).                        % Knowledge base relation
reverse_list([Head|Tail], Result) :-         % Rule definition
    reverse_list(Tail, RevTail),
    append(RevTail, [Head], Result).         % Knowledge base relation
