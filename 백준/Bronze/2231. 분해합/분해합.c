#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main()
{
    int N, temp, j=0, cons = 0;
    int arr2[2000001]={0};

    scanf("%d", &N);

    for(int i=0;i<N;i++){
        cons += i;
        temp = i;
        while(temp>0) {
            cons += (temp % 10);
            temp /= 10;
        }
        if(arr2[cons] == 0){
            arr2[cons] = i;
        }
        cons = 0;
    }

    printf("%d\n", arr2[N]);



    return 0;
}
