#include <stdio.h>
#include <string.h>

int main()
{
    int T = 0, k = 0, n = 0;
    int arr[15][15] = {0};

    scanf("%d", &T);
    for (int i = 0; i < 15; i++)
    {
        arr[0][i] = i + 1;
    }
    for (int i = 0; i < 15; i++)
    {
        arr[i][0] = 1;
    }

    for (int i = 0; i < T; i++)
    {
        scanf("%d", &k);
        scanf("%d", &n);
        for (int row = 1; row <= k; row++)
        {
            for (int col = 1; col <=n; col++)
            {
                arr[row][col] = arr[row - 1][col] + arr[row][col - 1];
            }
        }
        printf("%d\n", arr[k][n - 1]);
    }
    return 0;
}