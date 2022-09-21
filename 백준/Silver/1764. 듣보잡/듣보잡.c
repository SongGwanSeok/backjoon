#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct name{
    char name[21];
};

struct name name[1000001];
struct name same[500001];

int comp(const void*a, const void*b){
    return (strcmp((char*)a, (char*)b));
}

int main()
{
    int N, M, count = 0;

    scanf("%d %d", &N, &M);

    for(int i =0;i<N + M; i++) {
        scanf("%s", name[i].name);
    }

    qsort(name, N + M, sizeof(name[0]),comp);

    for(int i=0;i<N + M;i++){
        if(strcmp(name[i].name, name[i+1].name) == 0){
            strcpy(same[count].name,name[i].name);
            i++;
            count++;
        }
    }
    printf("%d\n", count);
    for(int i=0;i<count;i++){
            printf("%s\n", same[i].name);

    }




    return 0;
}
