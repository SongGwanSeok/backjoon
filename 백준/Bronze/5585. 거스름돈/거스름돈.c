#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int temp =0, amount =0, money  =0, res =0;
    int coinValue[11]={500, 100, 50, 10, 5, 1};

    scanf("%d", &money);

    amount = 1000-money;

    while(amount !=0){
        if(amount >= coinValue[temp]){
             res += amount / coinValue[temp];
            amount = amount % coinValue[temp];
        }
        temp ++;
    }
    printf("%d\n", res);

    return 0;
}