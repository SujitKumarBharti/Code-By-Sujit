calculate_sum(A, B, Result) :- Result is A + B.  % In Prolog, 'is' evaluates expressions on the right-hand side.
calculate_sub(A, B, Result) :- Result is A - B.
calculate_mul(A, B, Result) :- Result is A * B.
calculate_div(A, B, Result) :- B =\= 0, Result is A / B.
calculate_mod(A, B, Result) :- B =\= 0, Result is A mod B.
calculate_pow(A, B, Result) :- Result is A ** B.
