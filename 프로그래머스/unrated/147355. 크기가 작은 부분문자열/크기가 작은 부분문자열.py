def solution(t, p):
    len_t = len(t) #7
    len_p = len(p) #3
    num_p = int(p)
    list_number = []
    result = 0
    for i in range(len_t-len_p+1):
        str_temp = ''
        for j in range(len_p):
            str_temp += t[i + j]
        if int(str_temp) <= num_p:
            result += 1
    return result