#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int hour, min = 0;
    int time = 0;

    scanf("%d %d", &hour, &min);
    scanf("%d", &time);

    min = min + time;

    while(min>59)
    {
        if (min > 59)
        {
            min = min - 60;
            hour++;
            if (hour > 23)
            {
                hour = 0;
            }
        }
    }

    printf("%d %d", hour, min);
    return 0;
}