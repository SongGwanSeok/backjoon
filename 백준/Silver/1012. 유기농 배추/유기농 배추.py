from collections import deque
import sys
sys.setrecursionlimit(100000)

t = int(input())
result = 0

for _ in range(t):
    m, n, k = map(int, input().split())

    graph = [[0] * m for _ in range(n)]

    for _ in range(k):
        y, x = map(int, input().split())
        graph[x][y] = 1

    checked = [item[:] for item in graph]
    dx = [1, -1, 0, 0]
    dy = [0, 0, 1, -1]

    def dfs(checked, x, y):
        checked[x][y] = 0
        for d in range(4):
            nx = x + dx[d]
            ny = y + dy[d]
            if -1 < nx < n and -1 < ny < m and checked[nx][ny] == 1:
                dfs(checked, nx, ny)


    for i in range(n):
        for j in range(m):
            if checked[i][j] == 1:
                result += 1
                dfs(checked, i, j)

    print(result, end='\n')
    result = 0


