
m, n = map(int, input().split())
graph = []

for i in range(m):
    graph.append(input())


color = ['B', 'W']

paint_list = []
for x_start in range(m-7):
    for y_start in range(n-7):
        paint = 0
        paint_b, paint_w = 0, 0
        for x in range(x_start, x_start + 8):
            for y in range(y_start, y_start + 8):
                if graph[x][y] != color[(x + y) % 2]:
                    paint_b += 1
                else:
                    paint_w += 1
        paint = min(paint_w, paint_b)
        paint_list.append(paint)

print(min(paint_list))


