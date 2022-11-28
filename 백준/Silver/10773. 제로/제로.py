n = int(input())
result, cnt = 0, 0
stack = []

for _ in range(n):
    num = int(input())

    if num == 0:
        stack.pop()
    else:
        stack.append(num)

for i in stack:
    result += i

print(result)




