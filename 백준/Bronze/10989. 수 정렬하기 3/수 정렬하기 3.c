#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N, num;
    int count[10001] = {0};
    scanf("%d", &N);


    for(int i=0;i<N;i++){
        scanf("%d", &num);
        count[num]++;
    }

    for(int i=0;i<10001;i++){
        if(count[i] == 0){
            continue;
        }
        for(int j=0;j<count[i];j++){
            printf("%d\n", i);
        }
    }

    return 0;
}
