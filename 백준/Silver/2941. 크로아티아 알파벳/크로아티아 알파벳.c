#include<stdio.h>
#include<string.h>

int main(){

    char str[103]={0};
    int length = 0;
    int alpha = 0;


    scanf("%s", str);
    length = strlen(str);

    for(int i=0;i<length;i++){
        if(str[i]=='c'){
            if(str[i+1]=='='||str[i+1]=='-'){
                alpha--;
            }
        }
        else if(str[i]=='d'){
            if(str[i+1]=='-'){
                alpha--;
            }
            else if(str[i+1]=='z'&&str[i+2]=='='){
                alpha = alpha-1;
            }
        }
        else if(str[i]=='l'){
            if(str[i+1]=='j'){
                alpha--;
            }
        }
        else if(str[i]=='n'){
            if(str[i+1]=='j'){
                alpha--;
            }
        }
        else if(str[i]=='s'){
            if(str[i+1]=='='){
                alpha--;
            }
        }
        else if(str[i]=='z'){
            if(str[i+1]=='='){
                alpha--;
            }
        }
        alpha++;
    }

    printf("%d\n", alpha);
    return 0;
}