def solution(my_string):
    rev_list = []
    for i in my_string:
        rev_list.insert(0,i)
    answer = ''.join(s for s in rev_list)
    
    return answer