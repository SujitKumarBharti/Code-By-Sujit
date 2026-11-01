animal(cheetah) :-                           % Demonstrates knowledge representation, inference engine, and rule chaining.
    mammal,                                  % Animal rules
    carnivore,
    has_tawny_color,
    has_dark_spots.

animal(tiger) :-
    mammal,
    carnivore,
    has_tawny_color,
    has_black_stripes.

animal(giraffe) :-
    ungulate,
    has_long_neck,
    has_long_legs,
    has_dark_spots.

animal(zebra) :-
    ungulate,
    has_black_stripes.

animal(penguin) :-
    bird,
    cannot_fly,
    swims,
    has_black_and_white_color.

animal(albatross) :-
    bird,
    flies_well.

mammal   :- has_hair.                        % Intermediate classification rules
mammal   :- gives_milk.
bird     :- has_feathers.
bird     :- flies, lays_eggs.
carnivore :- eats_meat.
carnivore :- has_pointed_teeth, has_claws, eyes_forward.
ungulate :- mammal, has_hoofs.
ungulate :- mammal, chews_cud.

has_hair.                                    % Sample dynamic facts asserted for a test session
has_pointed_teeth.
has_claws.
eyes_forward.
has_tawny_color.
has_dark_spots.
