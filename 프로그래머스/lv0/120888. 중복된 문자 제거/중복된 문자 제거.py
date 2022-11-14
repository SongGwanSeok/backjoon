def solution(my_string):
    str_list = []
    
    for i in my_string:
        if i not in str_list:
            str_list.append(i)
                
    answer = ''.join(s for s in str_list)
    
    return answer