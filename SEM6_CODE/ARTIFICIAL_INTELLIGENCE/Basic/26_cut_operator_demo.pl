classify_number(N, positive) :- N > 0, !.    % Cut commits to choices made so far and prevents unwanted backtracking.
classify_number(0, zero)     :- !.           % Example: Classifying numbers into Positive, Zero, or Negative
classify_number(N, negative) :- N < 0.       % Without cut, Prolog would test other branches even after a match.

max_with_cut(X, Y, X) :- X >= Y, !.          % Example: Green Cut (Efficiency optimization for max)
max_with_cut(_, Y, Y).
