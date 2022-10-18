#include<stdio.h>
#include<string.h>

int main(){
    char word[101] = {0.};
    int alpha[27] = {0.};

    scanf("%s", word);

    for(int i=0;i<strlen(word);i++){
        alpha[(int)word[i] - 97] ++;
    }

    for(int i=0;i<26;i++){
        printf("%d ", alpha[i]);
    }




    return 0;
}