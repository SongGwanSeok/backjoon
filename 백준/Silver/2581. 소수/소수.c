#include<stdio.h>

int main(){

    int M, N, amount = 0, first = 0;

    scanf("%d", &M);
    scanf("%d", &N);

    for(int i=M;i<=N;i++){

        for(int j=2;j<=i;j++){
            if(i % j == 0){
                if(i == j){
                    amount += i;
                    if(first == 0){
                        first = i;
                    }
                    break;
                }
                else{
                    break;
                }
            }
        }
    }

    if(amount == 0){
        printf("-1");
    }else{
        printf("%d\n%d", amount, first);
    }
    return 0;
}
