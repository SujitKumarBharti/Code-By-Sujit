ako(dog, mammal).                            % Knowledge base relation
ako(cat, mammal).                            % Knowledge base relation
ako(mammal, animal).                         % Knowledge base relation

has_property(mammal, warm_blooded).          % Knowledge base relation
has_property(animal, living_organism).       % Knowledge base relation

frame_get(Object, Property) :-               % Rule definition
    has_property(Object, Property).          % Knowledge base relation
frame_get(Object, Property) :-               % Rule definition
    ako(Object, Parent),
    frame_get(Parent, Property).             % Knowledge base relation
