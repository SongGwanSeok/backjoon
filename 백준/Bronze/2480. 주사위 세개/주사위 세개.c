#include <stdio.h>

int main() {
    int num1, num2, num3, result;

    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 == num2 && num1 == num3){
        result = 10000 + num1 *1000;
    }else if(num1 == num2 || num2 == num3 || num1 == num3){
        if(num1 == num2 || num1 == num3) {
            result = 1000 + num1 * 100;
        }else{
            result = 1000 + num2 * 100;
        }
    }else {
        if(num1 > num2 && num1 > num3){
            result =  num1*100;
        }else if(num2 > num1 && num2 > num3){
            result =  num2*100;
        }else if(num3 > num2 && num3 > num1){
            result =  num3*100;
        }
    }
    printf("%d\n", result);


    return 0;
}
