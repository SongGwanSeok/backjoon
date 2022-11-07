#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int static compare (const void* first, const void* second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}


int main(){
    int arr[10];

    while(1){
        scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
        if(arr[0] == 0 && arr[1] == 0 && arr[2]==0){
            break;
        }
        qsort(arr, 3, sizeof(int), compare);
        if(((int)pow((double)arr[0],2) + (int)pow((double)arr[1],2)) == (int)pow((double)arr[2],2)){
            printf("right\n");
        }else {
            printf("wrong\n");
        }
    }





    return 0;
}