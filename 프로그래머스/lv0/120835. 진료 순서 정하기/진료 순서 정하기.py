def solution(emergency):
    result = []
    temp_arr = emergency[:]
    emergency.sort()
    lengh = len(emergency)

    for i in range(lengh):
        result.append(0)
    cnt = 0
    
    for i in range(lengh):  # e : 1,2,3,4,5,6,7
        for j in range(lengh):  #temp_arr : 1,2,3,4,5,6,7
            if emergency[i] == temp_arr[j]:
                result[j] = lengh - cnt
                cnt += 1
                break
            
        
    answer = result
    return answer