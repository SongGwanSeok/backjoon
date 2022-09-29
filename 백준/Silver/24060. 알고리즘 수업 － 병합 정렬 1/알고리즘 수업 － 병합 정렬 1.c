#include <stdio.h>
#include <string.h>
int head, tail;
int tmp[500001];
int N, K, cnt=0, result;


//# A[p..q]와 A[q+1..r]을 병합하여 A[p..r]을 오름차순 정렬된 상태로 만든다.
//# A[p..q]와 A[q+1..r]은 이미 오름차순으로 정렬되어 있다.
void merge(int* A, int p, int q, int r) {

    int i = p;
    int j = q + 1;
    int t = 1;
    while (i <= q && j <= r) {
        if (A[i] <= A[j]){
            cnt++;
            if(cnt == K){
                tmp[t++] = A[i];
                result = A[i];
                break;
            }
            tmp[t++] = A[i++];

        }
        else {
            cnt++;
            if(cnt == K){
                tmp[t++] = A[j];
                result = A[j];
                break;
            }
            tmp[t++] = A[j++];


        }
    }
    while (i <= q) {//# 왼쪽 배열 부분이 남은 경우
        cnt++;
        if(cnt == K){
            tmp[t++] = A[i];
            result = A[i];
            break;
        }
        tmp[t++] = A[i++];

    }
    while (j <= r)  {//# 오른쪽 배열 부분이 남은 경우
        cnt++;
        if(cnt == K){
            tmp[t++] = A[j];
            result = A[j];
            break;
        }
        tmp[t++] = A[j++];

    }
    i = p;
    t = 1;
    while (i <= r)  //# 결과를 A[p..r]에 저장
    A[i++] = tmp[t++];
}
void merge_sort(int* A, int p, int r) { //# A[p..r]을 오름차순 정렬한다.
    if (p < r) {
        int q = ((p + r) / 2);       //# q는 p, r의 중간 지점
        merge_sort(A, p, q);     // # 전반부 정렬
        merge_sort(A, q + 1, r); // # 후반부 정렬
        merge(A, p, q, r);        //# 병합
    }
}

int main(){


    int A[500001];
    scanf("%d %d", &N, &K);
    for(int i = 0;i<N;i++){
        scanf("%d", &A[i]);
    }
    merge_sort(A,0, N-1);
//    for(int i=0;i<N;i++){
//        printf("%d ", A[i]);
//    }
    if(cnt<K){
        printf("-1");
    }else{
        printf("%d", result);
    }






    return 0;
}