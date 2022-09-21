#include <stdio.h>

int main()
{
    int number, count = 0;
    int tenNum, oneNum = 0;
    int newNum = 100;

    scanf("%d", &number);
    if (number < 10)
    {
        tenNum = 0;
        oneNum = number % 10;
    }
    else
    {
        tenNum = number / 10;
        oneNum = number % 10;
    }
    while (newNum != number)
    {    
        int FirstNum, temp = 0;
        temp = tenNum + oneNum;
        tenNum = oneNum;
        oneNum = temp % 10;
        newNum = tenNum * 10 + oneNum;
        count++;
    }
    printf("%d\n", count);

    return 0;
}