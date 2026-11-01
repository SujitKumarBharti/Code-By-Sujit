list_length([], 0).                          % The length of an empty list is 0

list_length([_|T], Length) :-                % Length = 1 + Length(Tail)
    list_length(T, SubLen),
    Length is SubLen + 1.
