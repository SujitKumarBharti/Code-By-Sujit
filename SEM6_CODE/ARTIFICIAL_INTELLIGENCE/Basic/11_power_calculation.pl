power(_, 0, 1).                              % Base^0 = 1

power(Base, Exp, Result) :-                  % Base^E = Base * Base^(E-1)
    Exp > 0,
    Exp1 is Exp - 1,
    power(Base, Exp1, SubRes),
    Result is Base * SubRes.
