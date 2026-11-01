edge(a, b).                                                 % BFS explores paths queue-by-queue, guaranteeing the shortest path in unweighted graphs.
edge(a, c).
edge(b, d).
edge(b, e).
edge(c, f).
edge(e, g).
edge(f, g).

bfs(Start, Goal, Path) :-                                   % bfs(Start, Goal, Path)
    bfs_queue([[Start]], Goal, RevPath),
    reverse(RevPath, Path).

bfs_queue([[Goal|Rest]|_], Goal, [Goal|Rest]).              % The head path reaches Goal

bfs_queue([[Current|Rest]|OtherPaths], Goal, FinalPath) :-  % Expand current path and enqueue children at the back
    findall([Next, Current|Rest],
            (edge(Current, Next), \+ member(Next, [Current|Rest])),
            NewPaths),
    append(OtherPaths, NewPaths, UpdatedQueue),
    bfs_queue(UpdatedQueue, Goal, FinalPath).
