#include<stdio.h>

int main(){
    int arr[1001] = {0};
    int N = 0, A=0, B=0, C=0;
    int cnt = 99;
    scanf("%d", &N);

    if(N<100){
        printf("%d", N);
    }else{
        for (int i = 100; i <=N; i++)
        {
            A = i / 100;
            B = i / 10 % 10;
            C = i % 10;

            if ((C - B) == (B - A)) {
                cnt++;
            }
        }
        printf("%d", cnt);
    }

    return 0;
}
