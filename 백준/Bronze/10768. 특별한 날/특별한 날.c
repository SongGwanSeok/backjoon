#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int M=0, D=0;

    scanf("%d", &M);
    scanf("%d", &D);

    if(M<2){
        printf("Before\n");
    }else if(M>2){
        printf("After\n");
    }else if(D<18){
        printf("Before\n");
    }else if(D>18){
        printf("After\n");
    }else{
        printf("Special\n");
    }

    return 0;
}