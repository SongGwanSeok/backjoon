#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int arr[1002]={0};
int count=0;
int fibonacci(int N){
    if(N==1||N==2 ){
        return N;
    }else{
        if(arr[N] == 0){
            arr[N] = (fibonacci(N-1)+ fibonacci(N-2))%10007;
            return arr[N];
        }
        else{
            return arr[N];
        }
    }

}

int main()
{
    int N;

    scanf("%d", &N);

        printf("%d\n", fibonacci(N));


    return 0;
}
