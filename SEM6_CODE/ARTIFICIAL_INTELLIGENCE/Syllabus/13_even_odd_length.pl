evenlength([]).                              % Knowledge base relation
evenlength([_|Tail]) :-                      % Rule definition
    oddlength(Tail).                         % Knowledge base relation

oddlength([_]).                              % Knowledge base relation
oddlength([_|Tail]) :-                       % Rule definition
    evenlength(Tail).                        % Knowledge base relation
