edge(1, 2).
edge(1, 3).
edge(2, 4).
edge(2, 5).
edge(3, 6).
edge(5, 7).

dfs(Start, Goal, Path) :-                    % Wrapper predicate: dfs(Start, Goal, Path)
    dfs_search(Start, Goal, [Start], RevPath),
    reverse(RevPath, Path).

dfs_search(Goal, Goal, Visited, Visited).    % Reached Goal

dfs_search(Current, Goal, Visited, Path) :-
    edge(Current, Next),
    \+ member(Next, Visited),                % Prevent infinite loops / cycles
    dfs_search(Next, Goal, [Next|Visited], Path).
