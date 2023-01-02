import heapq
import sys
input = sys.stdin.readline
INF = int(1e9)

n, m, x = map(int, input().split())
graph = [[] for _ in range(n+1)]
distance = [INF]*(n+1)
result = [0]*(n+1)
max_dist = 0

for i in range(m):
    a, b, c = map(int, input().split())
    graph[a].append((b, c))


def dijkstra(start, end):
    hq = []  # (거리, end노드)
    heapq.heappush(hq, (0, start))
    distance[start] = 0
    while hq:
        dist, now = heapq.heappop(hq)
        if distance[now] < dist:
            continue
        for i in graph[now]:
            cost = dist + i[1]
            if cost < distance[i[0]]:
                distance[i[0]] = cost
                heapq.heappush(hq, (cost, i[0]))
    return distance[end]


dijkstra(x, 0)
for i in range(1, n+1):
    result[i] += distance[i]


for i in range(1, n+1):
    if i is not x:
        distance = [INF]*(n+1)
        result[i] += dijkstra(i, x)


for i in range(1, n+1):
    if result[i] > max_dist:
        max_dist = result[i]

print(max_dist)
