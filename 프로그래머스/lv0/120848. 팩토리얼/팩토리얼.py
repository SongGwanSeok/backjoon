def solution(n):
    answer = 0
    num = 1
    temp = 1
    while True:
        num *= temp
        if num > n:
            break
        temp += 1
    
    return temp - 1