#include <stdio.h>

int main()
{
    int N = 0, num = 0, temp = 0;
    int count = 0;
    int order[1001] = {0};

    scanf("%d", &N);
    for(int i=0; i<N;i++){
    scanf("%d", &order[i]);
    }
    for(int i = 0; i < N; i++)
	{
		for(int j = i+1; j < N; j++)
		{
			if(order[i] > order[j])
			{
				temp = order[i];
				order[i] = order[j];
				order[j] = temp;
			}
		}
	}
    for(int i=0; i<N-count; i++){
        printf("%d\n", order[i]);
    }

        
    return 0;
}