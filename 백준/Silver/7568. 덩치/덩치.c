#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
struct person{
    int weight;
    int height;
};

int main()
{
    int N;
    struct person personArr[51];
    int heightArr[51]={0};
    scanf("%d", &N);
    for(int i=0;i<N;i++){
        scanf("%d %d", &personArr[i].weight, &personArr[i].height);
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(personArr[i].weight<personArr[j].weight){
                if(personArr[i].height<personArr[j].height){
                    heightArr[i]++;
                }
            }
        }
    }

    for(int i=0;i<N;i++){
        printf("%d ", heightArr[i] + 1);
    }


    return 0;
}
