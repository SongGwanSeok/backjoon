#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int queue[1000001][3];
int box[1001][1001];
int check[1001][1001];
int head=0, tail =0;
int numOne =0;

void bfs(){
    int pop_x, pop_y, pop_day=1;

    while(head<tail){
        pop_x = queue[head][0];
        pop_y = queue[head][1];
        pop_day = queue[head][2];
        head++;

        if(box[pop_x+1][pop_y] == 0 && check[pop_x+1][pop_y] == 0){
            queue[tail][0] = pop_x+1;
            queue[tail][1] = pop_y;
            queue[tail][2] = pop_day+1;
            tail++;
            check[pop_x+1][pop_y] = pop_day+1;
        }
        if(box[pop_x][pop_y+1] == 0 &&check[pop_x][pop_y+1] == 0){
            queue[tail][0] = pop_x;
            queue[tail][1] = pop_y+1;
            queue[tail][2] = pop_day+1;
            tail++;
            check[pop_x][pop_y+1] = pop_day+1;
        }
        if(box[pop_x-1][pop_y] == 0 &&check[pop_x-1][pop_y] == 0){
            queue[tail][0] = pop_x-1;
            queue[tail][1] = pop_y;
            queue[tail][2] = pop_day+1;
            tail++;
            check[pop_x-1][pop_y] = pop_day+1;
        }
        if(box[pop_x][pop_y-1] == 0 &&check[pop_x][pop_y-1] == 0){
            queue[tail][0] = pop_x;
            queue[tail][1] = pop_y-1;
            queue[tail][2] = pop_day+1;
            tail++;
            check[pop_x][pop_y-1] = pop_day+1;
        }
    }
}

int main(){

    int N, M, i, j, max = 0;
    scanf("%d %d", &M, &N);
    for(i=0;i<1000001;i++){
        memset(queue, 0, sizeof(queue[0]));
    }
    for(i=0;i<1001;i++){
        memset(box[i],-1,sizeof(box[i]));
        memset(check[i],0,sizeof(check[i]));
    }

    for(i=1;i<=N;i++){
        for(j=1;j<=M;j++){
            scanf("%d", &box[i][j]);
            if(box[i][j] == 1){
                numOne++;
                queue[tail][0] = i;
                queue[tail][1] = j;
                queue[tail][2] = 1;
                tail++;
                check[i][j] = 1;
            }
            if(box[i][j] == -1){
                check[i][j] = -1;
            }
        }
    }
    if(numOne == (N*M)){
        printf("0");
        return 0;
    }
    bfs();

    for(i=1;i<=N;i++){
        for(j=1;j<=M;j++){
            if(check[i][j] == 0){
                printf("-1");
                return 0;
            }
            else if(check[i][j] - 1 > max && check[i][j] != -1){
                max = check[i][j] - 1;
            }
        }
    }

    printf("%d\n", max);
    return 0;
}