def solution(n):
    if (n / 7).is_integer():
        return n / 7
    else :
        return n // 7 + 1
    
