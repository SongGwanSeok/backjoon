#include<stdio.h>
#include<math.h>

int main(){
    double A=0, B=0, V=0;
    int day =0;
    double current;

    scanf("%lf %lf %lf",&A, &B, &V );
    
    current = (V - B) / (A - B);
    day = ceil(current);

    printf("%d\n", day);

    return 0;
}