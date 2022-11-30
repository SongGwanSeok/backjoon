n = int(input())
zero = [1, 0, 1]
one = [0, 1, 1]


def fibo(num):
    lenth = len(zero)
    if num >= lenth:
        for i in range(lenth, num + 1):
            zero.append(zero[i-1] + zero[i-2])
            one.append(one[i-1] + one[i-2])

    print(zero[num], one[num])


for _ in range(n):
    num = int(input())
    fibo(num)




