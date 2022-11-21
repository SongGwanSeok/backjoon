import re

def solution(my_string):
    number = re.sub(r'[^0-9]', '', my_string)
    number = list(map(int, number))
    number.sort()
    
    return number