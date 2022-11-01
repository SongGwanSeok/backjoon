#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int a,b,i=0, j=0, temp=0, cnt=0;
    scanf("%d %d", &a, &b);

    while(b>a){
        if(b%2 == 0){
            b/=2;
            cnt++;
        }
        else if(b % 10 == 1) {
            b /=10;
            cnt++;
        }
        else
            break;

    }
    if(b==a){
        printf("%d\n", cnt+1);
    }else {
        printf("-1\n");
    }


    return 0;
}