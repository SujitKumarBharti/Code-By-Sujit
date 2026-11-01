sum_list([], 0).                             % Sum of an empty list is 0

sum_list([H|T], Sum) :-                      % Sum = Head + Sum(Tail)
    sum_list(T, SubSum),
    Sum is H + SubSum.
