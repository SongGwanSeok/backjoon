from collections import deque

n, m = map(int, input().split())

graph = []
check = []
for i in range(n):
    graph.append(list(map(int, input())))

check = [item[:] for item in graph]

dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]
nx, ny = 0, 0
q = deque()
q.append(list(map(int, (nx, ny))))
result = []

while q:
    nx, ny = q.popleft()
    if nx == n-1 and ny == m-1:
        break
    for i in range(4):
        if -1 < nx + dx[i] < n and -1 < ny + dy[i] < m:
            if check[nx + dx[i]][ny + dy[i]] == 1:
                q.append(list(map(int, (nx + dx[i], ny + dy[i]))))
                graph[nx + dx[i]][ny + dy[i]] = graph[nx][ny] + 1
                check[nx + dx[i]][ny + dy[i]] = 0



print(graph[nx][ny])



