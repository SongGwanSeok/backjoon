#include <stdio.h>
#include <math.h>
int main()
{
    long long fixed = 0, variable = 0, laptop_price = 0;
    int count =0, result = 0;


    scanf("%lld %lld %lld", &fixed, &variable, &laptop_price);

    
    result = ceil(fixed /(laptop_price - variable)) + 1;
        

    if(variable >= laptop_price){
        result = -1;
    }

    printf("%d\n", result);

    return 0;
}