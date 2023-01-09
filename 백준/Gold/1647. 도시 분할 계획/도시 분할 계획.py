N, M = map(int, input().split())

parent = [0]*(N+1)
edges = []
result, max_cost = 0, 0


def find_parent(parent, x):
    if parent[x] != x:
        parent[x] = find_parent(parent, parent[x])
    return parent[x]

def union_parent(parent, a, b):
    a = find_parent(parent, a)
    b = find_parent(parent, b)
    if a < b:
        parent[b] = a
    else:
        parent[a] = b


for i in range(N + 1):
    parent[i] = i

for i in range(M):
    a, b, c = map(int, input().split())
    edges.append((c, a, b))

edges.sort()

for edge in edges:
    cost, a, b = edge
    if find_parent(parent, a) != find_parent(parent, b):
        union_parent(parent, a, b)
        max_cost = max(max_cost, cost)
        result += cost

print(result - max_cost)

