import heapq
import sys
input = sys.stdin.readline
INF = int(1e8)

n, m = map(int, input().split())

graph = [[] for i in range(n+1)]
distance = [INF] * (n+1)

for _ in range(m):
    a, b, c = map(int, input().split())
    graph[a].append((b, c))
    graph[b].append((a, c))

v1, v2 = map(int, input().split())
search_list1 = [1, v1, v2, n]
search_list2 = [1, v2, v1, n]


def dijkstra(start, v):
    hq = []
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
    return distance[v]


result1 = 0
for i in range(3):
    result1 += dijkstra(search_list1[i], search_list1[i+1])
    distance = [INF] * (n + 1)

result2 = 0
for i in range(3):
    result2 += dijkstra(search_list2[i], search_list2[i + 1])
    distance = [INF] * (n + 1)

if min(result1, result2) >= INF:
    print("-1")
else:
    print(min(result1, result2))



