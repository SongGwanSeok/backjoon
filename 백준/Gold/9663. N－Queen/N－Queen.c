#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int N, ans = 0;
int ches[16] ={0};

void Queen(int now){ //now:지금 내가 있는 행의 번호
   //기저조건
   if(now == N){
       ans++;
       return;
   }

   for(int a=0;a<N;a++){
       int ok = 1;
       for(int b=0;b<now;b++){
           if(a != ches[b] && abs(ches[b] - a) != abs(now - b)){
               continue;
           }else{
               ok =0;
               break;
           }
       }
       if(ok == 1){
           ches[now] = a;
           Queen(now+1);
       }


   }
}

int main()
{
    scanf("%d", &N);
    Queen(0);
    printf("%d", ans);

    return 0;
}
