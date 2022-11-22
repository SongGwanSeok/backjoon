from collections import deque

n = int(input())

graph = []

for i in range(n):
    graph.append(list(map(int, input())))

check = [item[:] for item in graph]
cnt = 0
result = [0 for _ in range(n*n)]

dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]

#print(result)
def dfs(array, x, y, num):
    if check[x][y] == 1 and graph[x][y] == 1:
        check[x][y] = 0
        graph[x][y] = num
        result[num] += 1

        for k in range(4):
            nx = x + dx[k]
            ny = y + dy[k]
            if -1 < nx < n and -1 < ny < n:
                if check[nx][ny] == 1 and graph[nx][ny] == 1:
                    dfs(array, nx, ny, num)




for i in range(n):
    for j in range(n):
        if check[i][j] == 1:
            cnt += 1
            dfs(graph, i, j, cnt)

result[1:cnt+1] = sorted(result[1:cnt+1])
print(cnt)
for i in range(1, cnt + 1):
    print(result[i], end='\n')



