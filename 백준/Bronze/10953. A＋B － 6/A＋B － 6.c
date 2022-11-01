#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int a, b, n;
    char c;

    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d%c%d", &a, &c, &b);
        printf("%d\n", a+b);
    }




    return 0;
}