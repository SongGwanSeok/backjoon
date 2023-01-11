from collections import deque

dx = [0, 1, 1, 1, 0, -1, -1, -1]
dy = [1, 1, 0, -1, -1, -1, 0, 1]

m, n = map(int, input().split())


def bfs(graph, visited, x, y):
    q = deque()
    q.append((x, y))
    visited[x][y] = True
    while q:
        nx, ny = q.popleft()
        for i in range(8):
            next_x, next_y = nx + dx[i], ny + dy[i]
            if next_x >= 0 and next_x < n and next_y >= 0 and next_y < m:
                if graph[next_x][next_y] == 1 and not visited[next_x][next_y]:
                    visited[next_x][next_y] = True
                    q.append((next_x, next_y))



while n != 0 and m != 0:
    result = 0
    graph = []
    visited = [[False] * m for _ in range(n)]
    for _ in range(n):
        graph.append(list(map(int, input().split())))

    for i in range(n):
        for j in range(m):
            if graph[i][j] == 1 and not visited[i][j]:
                result += 1
                bfs(graph, visited,  i, j)

    m, n = map(int, input().split())
    print(result)

