import sys
input = sys.stdin.readline
INF = int(1e9)

n, m, x = map(int, input().split())
graph = [[] for _ in range(n+1)]
visited = [False]*(n+1)
distance = [INF]*(n+1)
result = [0]*(n+1)
max_dist = 0

for i in range(m):
    a, b, c = map(int, input().split())
    graph[a].append((b, c))


def small_dist_node():
    min_value = INF
    index = 0
    for u in range(1, n+1):
        if distance[u] < min_value and not visited[u]:
            min_value = distance[u]
            index = u
    return index


def dijkstra(start, end):
    distance[start] = 0
    visited[start] = True
    for j in graph[start]:
        distance[j[0]] = j[1]
    for k in range(n-1):
        now = small_dist_node()
        visited[now] = True
        for j in graph[now]:
            cost = distance[now] + j[1]
            if distance[j[0]] > cost:
                distance[j[0]] = cost
    return distance[end]


dijkstra(x, 0)
for i in range(1, n+1):
    result[i] += distance[i]


for i in range(1, n+1):
    if i is not x:
        visited = [False]*(n+1)
        distance = [INF]*(n+1)
        result[i] += dijkstra(i, x)


for i in range(1, n+1):
    if result[i] > max_dist:
        max_dist = result[i]

print(max_dist)
