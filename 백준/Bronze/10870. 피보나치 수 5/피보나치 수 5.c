#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int ans;
int a[30];

void fibonacci(int N, int i){

    if(N<i){
        ans = N;
    }else if(i == N){
        a[i] =a[i-2]+ a[i-1];
        ans = a[i];
    }else{
        a[i] =a[i-2]+ a[i-1];
        fibonacci(N, i+1);
    }
}

int main()
{
    int N;
    for(int i=0;i<2;i++){
        a[i] = i;
    }
    scanf("%d", &N);
    fibonacci(N,2);
    printf("%d\n", ans);

    return 0;
}
