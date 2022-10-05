#include <stdio.h>

int N=0, cnt=0;
int arr[100001][2]={0.};
void hanoi_tower_count(int n, int from, int tmp, int to) {
    cnt++;
    if (n == 1) {
    }
    else {
        hanoi_tower_count(n - 1, from, to, tmp);
        hanoi_tower_count(n - 1, tmp, from, to);
    }
}
void hanoi_tower(int n, int from, int tmp, int to) {
    cnt++;
    if (n == 1) {
        printf("%d %d\n", from, to);
    }
    else {
        hanoi_tower(n - 1, from, to, tmp);
        printf("%d %d\n", from, to);
        hanoi_tower(n - 1, tmp, from, to);
    }
}
int main() {

    scanf("%d", &N);
    hanoi_tower_count(N,1,2,3);
    printf("%d\n", cnt);
    hanoi_tower(N,1,2,3);



    return 0;
}