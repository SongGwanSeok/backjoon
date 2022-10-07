#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int arr[31]={0.};
    int num=0;

    for(int i=0;i<28;i++){

        scanf("%d", &num);
        arr[num] =1;
    }

    for(int i=1;i<=30;i++){
        if(arr[i] == 0){
            printf("%d\n", i);
        }

    }

    return 0;
}