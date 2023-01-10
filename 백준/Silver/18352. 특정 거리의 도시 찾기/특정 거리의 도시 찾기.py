from collections import deque
N, M, K, X = map(int, input().split())

graph = [[] for _ in range(N+1)]
visited = [False]*(N+1)
distance = [0]*(N+1)


def bfs(graph, K, start):
    result = []
    q = deque()
    q.append(start)
    visited[start] = True
    distance[start] = 0
    while q:
        now = q.popleft()
        for i in graph[now]:
            if not visited[i]:
                visited[i] = True
                q.append(i)
                distance[i] = distance[now] + 1
                if distance[i] == K:
                    result.append(i)
    return result


for _ in range(M):
    a, b = map(int, input().split())
    graph[a].append(b)

result_list = bfs(graph, K, X)
result_list.sort()
if len(result_list) == 0:
    print('-1')
else:
    for result in result_list:
        print(result)


