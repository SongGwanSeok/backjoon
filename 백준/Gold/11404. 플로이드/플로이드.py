INF = int(1e9)

n = int(input())
m = int(input())
floyd = [[INF] * (n+1) for i in range(n+1)]

for i in range(n+1):
    floyd[i][i] = 0

for i in range(m):
    a, b, c = map(int, input().split())
    if floyd[a][b] > c:
        floyd[a][b] = c

for k in range(1, n+1):
    for a in range(1, n+1):
        for b in range(1, n+1):
            floyd[a][b] = min(floyd[a][b], floyd[a][k] + floyd[k][b])


for i in range(1, n+1):
    for j in range(1, n+1):
        if floyd[i][j] == int(1e9):
            print(0, end=' ')
        else:
            print(floyd[i][j], end=' ')
    print()


