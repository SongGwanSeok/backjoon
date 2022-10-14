#include<stdio.h>
#include<string.h>
#include<time.h>

int main(){
    int N=0;
    scanf("%d", &N);

    for(int i=N;i>0;i--){
        for(int j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}