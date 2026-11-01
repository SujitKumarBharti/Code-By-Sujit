count_digits(N, 1) :-                        % Single digit number has 1 digit
    N >= 0, N < 10.

count_digits(N, Count) :-                    % Recursive Step for numbers >= 10
    N >= 10,
    NextN is N // 10,
    count_digits(NextN, SubCount),
    Count is SubCount + 1.
