#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int N=0,temp =0, amount =0;
    long long money = 0;
    int coinValue[11]={0.};

    scanf("%d %d", &N, &money);
    for(int i=0;i<N;i++){
        scanf("%d", &coinValue[i]);
        if(money>=coinValue[i]){
            temp = i;
        }
    }
    while(temp >= 0){
        if(money >= coinValue[temp]){
            amount += money / coinValue[temp];
            money = money % coinValue[temp];
        }
        temp --;
    }
    printf("%d\n", amount);

    return 0;
}