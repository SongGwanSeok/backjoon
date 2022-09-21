#include <stdio.h>

int main()
{
    int A, B, C, result, div = 0;
    int count[10];
    for (int i = 0; i < 10; i++)
    {
        count[i] = 0;
    }

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    result = A * B * C;
    div = result;
    while (div > 0)
    {
        int num = 0;
        num = div % 10;
        div = div / 10;
        switch (num)
        {
        case 0:
            count[0]++;
            break;
        case 1:
            count[1]++;
            break;
        case 2:
            count[2]++;
            break;
        case 3:
            count[3]++;
            break;
        case 4:
            count[4]++;
            break;
        case 5:
            count[5]++;
            break;
        case 6:
            count[6]++;
            break;
        case 7:
            count[7]++;
            break;
        case 8:
            count[8]++;
            break;
        case 9:
            count[9]++;
            break;
        }
    }
    for (int j = 0; j < 10; j++)
    {
        printf("%d\n", count[j]);
    }

    return 0;
}