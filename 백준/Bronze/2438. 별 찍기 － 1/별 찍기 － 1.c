#include <stdio.h>

int main() {
    int N, num1 = 1, num2, num3;

    scanf("%d", &N);

    for(int i=0;i<N;i++){
        for(int j=1;j<=num1;j++){
            printf("*");
        }
        num1++;
        printf("\n");
    }



    return 0;
}
