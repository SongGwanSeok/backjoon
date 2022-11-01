#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int x, y, w, h;
    int xMin=0, yMin=0;


    scanf("%d %d %d %d", &x, &y, &w, &h);

    if((w-x)<x){
        xMin = (w-x);
    }else if((w-x)>=x){
        xMin=x;
    }

    if((h-y)<y){
        yMin = (h-y);
    }else if((h-y)>=y){
        yMin=y;
    }

    if(xMin>yMin){
        printf("%d\n", yMin);
    }else if(xMin<=yMin){
        printf("%d\n", xMin);
    }



    return 0;
}