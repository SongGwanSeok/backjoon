from collections import Counter 

def solution(array):
    answer = Counter(array)

    if len(answer) == 1:
        return answer.most_common(1)[0][0]
    else:
        first = answer.most_common(2)[0][1]
        second = answer.most_common(2)[1][1]
        if first == second:
            return -1 
        else:
            return answer.most_common(1)[0][0]