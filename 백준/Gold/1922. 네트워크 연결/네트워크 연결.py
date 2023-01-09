n = int(input())
m = int(input())
edges = []
parent = [0] * (n+1)
result = 0


def find_parent(parent, x):
    if parent[x] != x:
        parent[x] = find_parent(parent,parent[x])
    return parent[x]


def union_parent(parent, a, b):
    a = find_parent(parent, a)
    b = find_parent(parent, b)
    if a < b:
        parent[b] = a
    else:
        parent[a] = b


for i in range(m):
    a, b, c = map(int, input().split())
    edges.append((c, a, b))

for i in range(n+1):
    parent[i] = i

edges.sort()

for edge in edges:
    c, a, b = edge
    if find_parent(parent, a) != find_parent(parent, b):
        union_parent(parent, a, b)
        result += c

print(result)



