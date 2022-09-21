#include<stdio.h>
#include<stdlib.h>
struct coordinate {
    int x;
    int y;
};


int compare(const void* a, const void* b)
{
    struct coordinate A = *(struct coordinate*)a;
    struct coordinate B = *(struct coordinate*)b;
    if (A.x > B.x)
    {
        return 1;
    }
    else if (A.x == B.x)
    {
        if (A.y > B.y)
            return 1;
        else//A.y<B.y
            return -1;
    }
    else //A.x<B.x
        return -1;
}


int main()
{
    int N,temp1, temp2;
    struct coordinate arr[100001];

    scanf("%d", &N);
    for(int i =0;i<N;i++){
        scanf("%d %d", &arr[i].x, &arr[i].y);
    }

    qsort(arr, N,sizeof(struct coordinate), compare);


    for(int i =0;i<N;i++){
        printf("%d %d\n",arr[i].x, arr[i].y);
    }

    return 0;
}
