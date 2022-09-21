#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int count=0;

void chat(int N){
    int cnt = N;
    char line1[30] = {"\"재귀함수가 뭔가요?\""};
    char line2[200] = {"\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어."};
    char line3[200] = {"마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지."};
    char line4[200] = {"그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\""};
    char line5[200] = {"\"재귀함수는 자기 자신을 호출하는 함수라네\""};
    char line6[200] = {"라고 답변하였지."};
    
    for(int i=0;i<count;i++){printf("____");}
    printf("%s\n", line1);
    for(int i=0;i<count;i++){printf("____");}
    printf("%s\n", line2);
    for(int i=0;i<count;i++){printf("____");}
    printf("%s\n", line3);
    for(int i=0;i<count;i++){printf("____");}
    printf("%s\n", line4);
    cnt--;
    count++;
    if(cnt == 0){
    for(int i=0;i<count;i++){printf("____");}
    printf("%s\n", line1);
    
    for(int i=0;i<count;i++){printf("____");}
    printf("%s\n", line5);

    for(int i=0;i<count;i++){printf("____");}
    printf("%s\n", line6);
    count--;
    for(int i=0;i<count;i++){printf("____");}
    printf("%s\n", line6);
        return;
    }
    chat(cnt);
    count--;
    for(int i=0;i<count;i++){printf("____");}
    printf("%s\n", line6);
    
}

int main(){
    int N=0;
    
    scanf("%d", &N);
    printf("어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n");
    chat(N);

    return 0;
}