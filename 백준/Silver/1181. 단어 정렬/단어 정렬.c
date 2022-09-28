#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int compare_len(const void *a, const void *b)
{
   int num1 = strlen((char *)a);
    int num2 = strlen((char *)b);
    if(num1<num2)
        return -1;
    else if(num1>num2)
        return 1;
    else
        return strcmp((char *)a, (char *)b);

}
int compare_alpha(const void *a, const void *b){
    return strcmp((char *)a, (char *)b);
}

int main(){
    int N;
    char arr[20001][100];

    scanf("%d", &N);

    for(int i=0;i<N;i++){
        scanf("%s", &arr[i]);
        getchar();
    }
    qsort(arr, N, sizeof(arr[0]), compare_len);
//    for(int i=0;i<N;i++){
//        printf("%s\n", arr[i]);
//    }


    for(int i=0;i<N;i++){
        if(strcmp(arr[i], arr[i+1])){
            printf("%s\n", arr[i]);
        }

    }

    return 0;
}