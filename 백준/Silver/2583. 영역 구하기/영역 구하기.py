import sys
sys.setrecursionlimit(100000)
N, M, K = map(int, input().split())


graph = [[0]*N for _ in range(M)]
cnt = [0]*(N*M)
num = 0


def checkGraph(start_x, start_y, end_x, end_y):
    for x in range(start_x, end_x):
        for y in range(start_y, end_y):
            graph[x][y] = 1


def dfs(x, y, num):
    if x <= -1 or x >= M or y <= -1 or y >= N:
        return False

    if graph[x][y] == 0:
        graph[x][y] = 1
        cnt[num] += 1

        dfs(x - 1, y, num)
        dfs(x, y - 1, num)
        dfs(x + 1, y, num)
        dfs(x, y + 1, num)
        return True
    return False


for i in range(K):
    start_x, start_y, end_x, end_y = map(int, input().split())
    checkGraph(start_x, start_y, end_x, end_y)



for i in range(M):
    for j in range(N):
        if graph[i][j] == 0:
            dfs(i, j, num)
            num += 1


result = cnt[0:num]
result.sort()
print(num)
for i in range(num):
    print(result[i], end=' ')





