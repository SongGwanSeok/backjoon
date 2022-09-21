#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main()
{
    int N, M, num1, num2, num3, amount =0;
    int arr[101]={0};

    scanf("%d %d", &N, &M);

    for(int i=0;i<N;i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0;i<N-2;i++){
        num1 = arr[i];
        for(int j=i+1;j<N-1;j++){
            num2 = arr[j];
            for(int k=j+1;k<N;k++){
                num3 = arr[k];
                if(amount<=num1+num2+num3 && num1+num2+num3<=M){
                    amount = num1+num2+num3;
                }
            }
        }
    }
    printf("%d\n", amount);
    return 0;
}
