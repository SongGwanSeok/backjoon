#include <stdio.h>

int main() {
    int num1;

    scanf("%d", &num1);

    if(num1 %4 == 0){
        if(num1 % 100!=0 || num1 % 400 == 0){
            printf("1");
        }
        else{
            printf("0");
        }
    }
    else{
        printf("0");
    }


    return 0;
}
