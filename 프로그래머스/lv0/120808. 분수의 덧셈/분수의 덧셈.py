def solution(denum1, num1, denum2, num2):
    temp_denum = denum1 * num2 + denum2 * num1
    temp_num  = num1 * num2
    
    for i in range(1, temp_denum + 1):
        if (temp_denum % i == 0) and (temp_num % i == 0):
            gcd = i 
    denum = temp_denum//gcd
    num = temp_num//gcd
    
    answer = [denum, num]
    return answer
