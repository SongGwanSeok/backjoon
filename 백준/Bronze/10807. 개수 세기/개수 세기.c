#include<stdio.h>
#include<string.h>
#include<time.h>

int main(){
    int N=0, cnt=0, num=0;
    int arr[101]= {0.};
    scanf("%d", &N);

    for(int i=0;i<N;i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &num );

    for(int i=0;i<N;i++){
        if(arr[i] == num){
            cnt++;
        }
    }
    printf("%d", cnt);

    return 0;
}