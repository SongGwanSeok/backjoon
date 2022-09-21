#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[1000001] = {0};
    int length = 0, count = 0;

    scanf("%[^\n]s", str);
    length = strlen(str);

    for (int i = 0; i < length; i++)
    {
        if (str[i] == ' ')
        {
            count++;
        }
    }
    if (str[0] == ' ')
    {
        count--;
    }
    if (str[length - 1] == ' ')
    {
        count--;
    }
    count++;
    printf("%d\n", count);
    return 0;
}