#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


int main(){
    int N=0, cnt=0, temp =0;
    char str[51] ={0.};
    scanf("%d", &N);
    for(int i=0;i<N;i++){
        temp = 0;
        cnt = 0;
        scanf("%s", str);
        getchar();

        for(int j=0;j<strlen(str);j++){
            if(str[j] == '('){
                cnt++;
            }else if(str[j] == ')'){
                if(cnt == 0){
                    cnt = -1;
                    break;
                }
                cnt--;
            }
        }
        if(cnt == 0){
            printf("YES\n");
        }else{
            printf("NO\n");
        }

    }







    return 0;
}