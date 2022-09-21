#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int arr[6] ={0};
    int num = 0;
    int i =0;

    while(num == 0){
        scanf("%d", &num);
        if(num == 0){
            break;
        }

        while(num != 0){
            arr[i] = num % 10;
            num = num/10;
            i++;
        }
        switch (i)
        {
        case 1: printf("yes\n");
            break;

        case 2: if(arr[0] == arr[1]){printf("yes\n");}
        else{printf("no\n");}
            break;
        case 3: if(arr[0] == arr[2]){printf("yes\n");}
        else{printf("no\n");}
            break;
        case 4: if(arr[0] == arr[3] && arr[1] == arr[2]){printf("yes\n");}
        else{printf("no\n");}
            break;
        case 5: if(arr[0] == arr[4] && arr[1] == arr[3]){printf("yes\n");}
        else{printf("no\n");}
            break;
        }
        i = 0;
    }

    return 0;
}