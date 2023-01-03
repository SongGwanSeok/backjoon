import heapq
import sys
input = sys.stdin.readline
INF = int(1e9)

n, m = map(int, input().split())

start = int(input())
graph = [[] for i in range(n+1)]
distance = [INF] * (n+1)

for _ in range(m):
    a, b, c = map(int, input().split())
    graph[a].append((b, c))

def dijkstra(start):
        hq = []  #(거리, end노드)
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

dijkstra(start)

for i in range(1, n+1):
    if distance[i] == INF:
        print("INF")
    else:
        print(distance[i])





