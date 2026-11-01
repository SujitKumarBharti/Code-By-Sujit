my_reverse([], []).                          % Knowledge base relation
my_reverse([Head|Tail], Rev) :-              % Rule definition
    my_reverse(Tail, RevTail),
    append_lists(RevTail, [Head], Rev).      % Knowledge base relation

palindrome(List) :-                          % Rule definition
    my_reverse(List, List).                  % Knowledge base relation
