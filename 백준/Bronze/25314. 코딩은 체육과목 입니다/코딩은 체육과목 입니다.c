#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int N=0, cnt=0;

    scanf("%d", &N);

    cnt = N/4;

    for(int i=0;i<cnt;i++){
        printf("long ");
    }
    printf("int\n");
    return 0;
}