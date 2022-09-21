#include<stdio.h>

int main()
{
    int N, fac = 1;

    scanf("%d", &N);

    if(N == 0){
        printf("1");
    }
    else{
        for(int i=1;i<=N;i++){
            fac *= i;
        }
        printf("%d", fac);
    }

    return 0;
}
