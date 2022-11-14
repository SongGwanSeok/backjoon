def solution(n, k):
    if k >= n/10:
        drink = k-(n//10)
    else:
        drink = 0
    
    return n*12000 + drink*2000