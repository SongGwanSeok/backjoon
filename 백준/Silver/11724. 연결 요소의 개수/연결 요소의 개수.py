n, m = map(int, input().split())
array = [[]for _ in range(n + 1)]
checked = [0 for _ in range(n + 1)]
cnt = 0


def dfs(node, array, checked):
    checked[node] = 1
    for i in array[node]:
        if checked[i] == 0:
            dfs(i, array, checked)


for _ in range(m):
    u, v = map(int, input().split())
    array[u].append(v)
    array[v].append(u)

for i in range(n+1):
    array[i].sort()

for i in range(1, n+1):
    if checked[i] == 0:
        dfs(i, array, checked)
        cnt += 1

print(cnt)




