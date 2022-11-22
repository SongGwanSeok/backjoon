from collections import deque

node = int(input())
n = int(input())
visited = [0*node for _ in range(node + 1)]
v = 1
result = 0

array = [[] for _ in range(node + 1)]

for i in range(n):
    start, end = map(int, input().split())
    array[start].append(end)
    array[end].append(start)

for i in array:
    i.sort()

q = deque()
q.append(v)
visited[v] = 1

while q:
    v = q.popleft()
    for i in array[v]:
        if visited[i] == 0:
            q.append(i)
            visited[i] = 1
            result += 1

print(result)


