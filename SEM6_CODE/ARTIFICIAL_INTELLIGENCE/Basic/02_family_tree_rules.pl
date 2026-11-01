parent(ram, luv).                            % Demonstrates compound rules with logical AND (comma ',')
parent(ram, kush).                           % parent(Parent, Child)
parent(sita, luv).
parent(sita, kush).
parent(dasharatha, ram).
parent(kaushalya, ram).

male(dasharatha).                            % gender
male(ram).
male(luv).
male(kush).
female(kaushalya).
female(sita).

father(F, C) :- parent(F, C), male(F).       % Rules
mother(M, C) :- parent(M, C), female(M).

grandparent(GP, GC) :- parent(GP, P), parent(P, GC).
grandfather(GF, GC) :- grandparent(GF, GC), male(GF).
grandmother(GM, GC) :- grandparent(GM, GC), female(GM).

sibling(X, Y) :- parent(P, X), parent(P, Y), X \= Y.
brother(B, Sib) :- sibling(B, Sib), male(B).
sister(S, Sib) :- sibling(S, Sib), female(S).
