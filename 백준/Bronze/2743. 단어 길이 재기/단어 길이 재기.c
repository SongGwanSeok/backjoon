#include<stdio.h>
#include<string.h>

int main(){
    char word[101]={0.};

    scanf("%s", &word);

    printf("%d\n", strlen(word));

    return 0;
}