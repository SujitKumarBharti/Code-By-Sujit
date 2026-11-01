enrolled(sujit, ai).                         % Prolog assumes Closed World Assumption: If a fact cannot be proven, it is considered false.
enrolled(rahul, dbms).
enrolled(priya, ai).

passed_prerequisite(sujit).
passed_prerequisite(priya).

can_take_advanced_ai(Student) :-             % A student can take Advanced AI if enrolled in AI AND has NOT failed prerequisite
    enrolled(Student, ai),
    passed_prerequisite(Student).

not_enrolled_in_ai(Student) :-               % Negation check: student is NOT enrolled in AI
    \+ enrolled(Student, ai).
