list_max([X], X).                            % Single element list has that element as max/min
list_min([X], X).

list_max([H|T], Max) :-                      % Recursive Step for Max
    list_max(T, SubMax),
    (H >= SubMax -> Max = H ; Max = SubMax).

list_min([H|T], Min) :-                      % Recursive Step for Min
    list_min(T, SubMin),
    (H =< SubMin -> Min = H ; Min = SubMin).
