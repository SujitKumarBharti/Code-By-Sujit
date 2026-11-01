move(state(middle, onbox, middle, hasnot),   % State is represented as: state(MonkeyLocation, MonkeyElevation, BoxLocation, HasBanana)
     grasp,                                  % Legal actions:
     state(middle, onbox, middle, has)).

move(state(P, onfloor, P, H),
     climb,
     state(P, onbox, P, H)).

move(state(P1, onfloor, P1, H),
     push(P1, P2),
     state(P2, onfloor, P2, H)).

move(state(P1, onfloor, B, H),
     walk(P1, P2),
     state(P2, onfloor, B, H)).

canget(state(_, _, _, has), []).             % Goal State: Monkey has banana

canget(State1, [Action|Plan]) :-             % Recursive plan search
    move(State1, Action, State2),
    canget(State2, Plan).
