#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int N = 0, score = 0, len = 0;
    int count = 0;
    char OX[80];

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%s", OX);
        len = strlen(OX);

        for (int j = 0; j < len; j++)
        {
            if (OX[j] == 'O')
            {
                ++count;
                score += count;
            }
            else
            {
                count = 0;
            }
        }

        printf("%d\n", score);
        count = 0;
        score = 0;
    }

    return 0;
}