import sys
sys.setrecursionlimit(100000)
n = int(input())
graph = []
new_graph = []
check = [[0]*n for _ in range(n)]
cnt = 0
res_RGB, res_RB = 0, 0


def dfs(x, y, str, graph):
    if x <= -1 or x >= n or y <= -1 or y >= n:
        return

    if graph[x][y] == str and check[x][y] == 0:
        check[x][y] = 1

        dfs(x - 1, y, str, graph)
        dfs(x, y - 1, str, graph)
        dfs(x + 1, y, str, graph)
        dfs(x, y + 1, str, graph)
        return
    return


for i in range(n):
    graph.append(input())

for i in range(n):
    for j in range(n):
        if graph[i][j] == 'R' and check[i][j] == 0:
            res_RGB += 1
            dfs(i, j, 'R', graph)
        elif graph[i][j] == 'G' and check[i][j] == 0:
            res_RGB += 1
            dfs(i, j, 'G', graph)
        elif graph[i][j] == 'B' and check[i][j] == 0:
            res_RGB += 1
            dfs(i, j, 'B', graph)


check = [[0]*n for _ in range(n)]

for i in range(n):
    new_graph.append(graph[i].replace('G', 'R'))

for i in range(n):
    for j in range(n):
        if new_graph[i][j] == 'R' and check[i][j] == 0:
            res_RB += 1
            dfs(i, j, 'R', new_graph)
        elif new_graph[i][j] == 'B' and check[i][j] == 0:
            res_RB += 1
            dfs(i, j, 'B', new_graph)


print(res_RGB, res_RB)


