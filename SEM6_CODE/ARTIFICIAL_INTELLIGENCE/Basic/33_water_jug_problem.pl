move(state(X, Y), state(4, Y), 'Fill 4-liter jug') :- X < 4.   % State: state(Jug4, Jug3)
move(state(X, Y), state(X, 3), 'Fill 3-liter jug') :- Y < 3.   % Jug 1 capacity: 4 liters, Jug 2 capacity: 3 liters. Goal: Measure 2 liters in 4-liter jug.
move(state(X, Y), state(0, Y), 'Empty 4-liter jug') :- X > 0.  % Production Rules:

move(state(X, Y), state(X, 0), 'Empty 3-liter jug') :- Y > 0.

move(state(X, Y), state(X1, 0), 'Pour Jug3 into Jug4') :-
    X + Y =< 4, X1 is X + Y, Y > 0.

move(state(X, Y), state(4, Y1), 'Pour Jug3 into Jug4 until full') :-
    X + Y > 4, Y1 is Y - (4 - X), X < 4.

move(state(X, Y), state(0, Y1), 'Pour Jug4 into Jug3') :-
    X + Y =< 3, Y1 is X + Y, X > 0.

move(state(X, Y), state(X1, 3), 'Pour Jug4 into Jug3 until full') :-
    X + Y > 3, X1 is X - (3 - Y), Y < 3.

solve(state(2, _), _, []).                                     % Goal state: 2 liters in the 4-liter jug
solve(Current, Visited, [Action | Path]) :-
    move(Current, Next, Action),
    \+ member(Next, Visited),
    solve(Next, [Next|Visited], Path).
