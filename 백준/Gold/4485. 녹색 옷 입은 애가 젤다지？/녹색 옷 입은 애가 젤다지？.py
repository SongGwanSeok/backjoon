import heapq
import sys

input = sys.stdin.readline
INF = int(1e9)
result, cnt = 0, 0
dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]


def dijkstra(graph, distance, n, cnt):
    hq = []
    distance[0][0] = graph[0][0]
    heapq.heappush(hq, (graph[0][0], 0, 0))
    while hq:
        dist, x, y = heapq.heappop(hq)
        if distance[x][y] < dist:
            continue
        for i in range(4):
            next_x = x + dx[i]
            next_y = y + dy[i]
            if next_x < 0 or next_y < 0 or next_x >= n or next_y >= n:
                continue
            else:
                if distance[x][y] + graph[next_x][next_y] < distance[next_x][next_y]:
                    distance[next_x][next_y] = distance[x][y] + graph[next_x][next_y]
                    heapq.heappush(hq, (graph[next_x][next_y], next_x, next_y))

    print("Problem " + str(cnt) + ": " + str(distance[n-1][n-1]))


n = int(input())

while n != 0:
    graph = []
    for i in range(n):
        graph.append(list(map(int, input().split())))
        distance = [[INF] * n for _ in range(n)]
    cnt += 1
    dijkstra(graph, distance, n, cnt)
    n = int(input())







