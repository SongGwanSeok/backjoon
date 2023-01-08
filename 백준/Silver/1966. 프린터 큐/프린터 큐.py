from collections import deque

case = int(input())

for _ in range(case):
    q = deque()
    result = 1
    n, m = map(int, input().split())
    list_num = list(map(int, input().split()))
    cnt = 0
    for i in list_num:
        q.append((i, cnt))
        cnt += 1
    # print(list_num)
    # print(q)
    max_num = max(q)
    # print(max_num)
    while True:
        number = q.popleft()
        if number[0] == max_num[0]:
            if number[1] == m:
                print(result)
                break
            else:
                result += 1
                max_num = max(q)
        else:
            q.append(number)


