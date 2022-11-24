def binary_search(start, end, array, target):
    if start > end:
        return None

    mid = (start + end) // 2
    if array[mid] == target:
        return mid
    elif array[mid] > target:
        return binary_search(start, mid-1, array, target)
    else:
        return binary_search(mid+1, end, array, target)


n = int(input())
array = list(map(int, input().split()))
array.sort()
m = int(input())
target_array = list(map(int, input().split()))

result = []

for i in target_array:
    result_value = binary_search(0, n-1, array, i)
    if result_value == None:
        result.append(0)
    else:
        result.append(1)

for i in result:
    print(i, end=" ")


