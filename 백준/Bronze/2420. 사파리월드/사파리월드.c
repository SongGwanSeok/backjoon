#include<stdio.h>
#include<stdlib.h>

int main(){
    long long N,M, ans;
    scanf("%lld %lld", &N,&M);
    ans = llabs(N-M);

    printf("%lld\n", ans);
    return 0;
}