#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int N=0, M=0, num=0;

    for(int i=0;i<4;i++){
        scanf("%d", &num);
        N+= num;
    }
    for(int i=0;i<4;i++){
        scanf("%d", &num);
        M+= num;
    }
    if(M>N){
        printf("%d\n", M);
    }
    else{
        printf("%d\n", N);
    }

    return 0;
}