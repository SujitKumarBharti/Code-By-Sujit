hanoi(1, Source, Target, _) :-                % Classic recursive problem: Move N disks from Source to Target using Auxiliary peg.
    write('Move disk from '), write(Source),  % Moving 1 disk
    write(' to '), write(Target), nl.

hanoi(N, Source, Target, Aux) :-              % Recursive Step for N disks:
    N > 1,
    M is N - 1,
    hanoi(M, Source, Aux, Target),
    hanoi(1, Source, Target, Aux),
    hanoi(M, Aux, Target, Source).
