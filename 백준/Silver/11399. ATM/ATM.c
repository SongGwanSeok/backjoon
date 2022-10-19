#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int static compare (const void* first, const void* second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}


int main(){
    int N=0, num = 0,sum=0;
    int order[1001]={0.}; // {2, 5, 1, 4, 3} {3, 1, 4, 3, 2}

    scanf("%d", &N);
    for(int i=0;i<N;i++){
        scanf("%d", &order[i]);
    }
    qsort(order, N, sizeof(int), compare);

    for(int i=0;i<N;i++){
        num += order[i];
        sum += num;
    }
    printf("%d\n", sum);


    return 0;
}