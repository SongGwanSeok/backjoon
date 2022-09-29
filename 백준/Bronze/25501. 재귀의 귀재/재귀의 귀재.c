#include <stdio.h>
#include <string.h>
int repeat =0;

int recursion(const char *s, int l, int r){
    repeat++;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(const char *s){
    return recursion(s, 0, strlen(s)-1);
}

int main(){

    int N, Palindrome;
    char word[1001] = {0};
    scanf("%d", &N);
    for(int i=0;i<N;i++){
        scanf("%s", word);
        getchar();
        Palindrome = isPalindrome(word);
        printf("%d %d\n", Palindrome, repeat);
        repeat =0;
    }




    return 0;
}