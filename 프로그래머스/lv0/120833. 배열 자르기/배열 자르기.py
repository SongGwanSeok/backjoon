def solution(numbers, num1, num2):
    result = []
    for i in range(len(numbers)):
        if num1 <= i <= num2:
            result.append(numbers[i])
    
    
    answer = result
    return answer