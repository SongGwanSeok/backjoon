import sys
input = sys.stdin.readline
n,m = map(int, input().split())
trees = list(map(int, input().split()))
left = 0
right = max(trees)
while left <= right:
    mid = (left + right) // 2
    sum = 0
    for tree in trees:
        if tree > mid:
            sum += tree - mid
    if sum == m:
        right = mid
        break
    elif sum > m:
        left = mid + 1
    else:
        right = mid - 1
print(right)