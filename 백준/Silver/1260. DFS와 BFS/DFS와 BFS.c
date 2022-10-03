#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int originArr[1001][1001] = {0};
int lineArr[1001][1001] ={0};
int write [1001] ={0};
int writeDfs [1001] ={0};
int queue [1001] = {0};
int N, M, V;
int head =0, tail =0, cnt=0;

void dfs(int root){
    printf("%d ", root);
    write[root] = 1;
    cnt++;
    if(cnt == N){
        return;
    }
    int i=root;
    for(int j=1;j<=N;j++){
        if(write[j] == 0 && lineArr[i][j] == 1){
            lineArr[i][j] =0;
            lineArr[j][i] =0;
            dfs(j);
        }
    }


    return;
}
void bfs (int root) {
    int i=root;
    while(1){
        for(int j=1;j<=N;j++){
            if(lineArr[i][j] == 1){
                lineArr[i][j] =0;
                lineArr[j][i] =0;
                if(writeDfs[j] == 0){
                    queue[tail] = j;
                    tail++;
                    writeDfs[j] = 1;
                }
            }
        }
        printf("%d ", queue[head]);
        head++;
        if(queue[head] == 0){
            return;
        }
        i=queue[head];
    }
    return;

}

int main(){
    int dot1 =0, dot2=0;
    scanf("%d %d %d", &N, &M, &V);
    for(int i=0;i<M;i++){
        scanf("%d %d", &dot1, &dot2);
        originArr[dot1][dot2]=1;
        originArr[dot2][dot1]=1;
        lineArr[dot1][dot2]=1;
        lineArr[dot2][dot1]=1;
    }
    dfs(V);
    printf("\n");
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            lineArr[i][j] = originArr[i][j];
        }
    }
    queue[head]= V;
    tail++;
    cnt = 0;
    bfs(V);
    printf("\n");

    return 0;
}