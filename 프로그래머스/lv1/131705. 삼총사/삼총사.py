def solution(number):
    cnt = 0
    i = 0
    lengh = len(number)
    while i < lengh:
        j = i + 1
        while j <lengh:
            k = j + 1
            while k < lengh:
                if (number[i] + number[j] + number[k]) == 0:
                    cnt += 1
                k += 1
            j += 1
        i += 1
    answer = cnt
    return answer