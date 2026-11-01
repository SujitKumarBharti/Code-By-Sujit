custom_append([], L, L).                     % Appending an empty list to List2 gives List2

custom_append([H|T], L2, [H|ResultTail]) :-  % [H|T] + L2 = [H | (T + L2)]
    custom_append(T, L2, ResultTail).
