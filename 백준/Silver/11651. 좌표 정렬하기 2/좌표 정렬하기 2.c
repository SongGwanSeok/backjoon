#include<stdio.h>
#include<stdlib.h>
struct point {
    int x ;
    int y ;
};
int compare(const void *a, const void *b)    // 오름차순 비교 함수 구현
{
    struct point num1 = *(struct point *)a;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴
    struct point num2 = *(struct point *)b;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴

    if (num1.y < num2.y)    // a가 b보다 작을 때는
        return -1;   // -1 반환
    else if(num1.y > num2.y)
        return 1;
    else{
        if(num1.x<num2.x)
            return -1;
        else
            return 1;
    }

    return 0;    // a와 b가 같을 때는 0 반환
}

int main(){
    struct point arr[100001] ;
    struct point temp;
    int temp2;


    int N;
    scanf("%d", &N);
    for(int i =0;i<N;i++){
        scanf("%d %d", &arr[i].x, &arr[i].y);
    }
    qsort(arr, N, sizeof(arr[0]), compare);


    for(int i=0;i<N;i++){
        printf("%d %d\n", arr[i].x, arr[i].y );
    }

    return 0;
}