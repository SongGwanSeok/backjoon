#include<stdio.h>

int main() {
    int arr[11] = {0};
    int num = 0, count = 0, temp = 0, digit = 0;

    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;
        arr[count] = digit;
        count++;
        num = num / 10;
        
    }
    for (int i = 0; i < count; i++)

		for (int j = 0; j < count - 1 - i; j++)

			if (arr[j] < arr[j + 1]) {

				temp = arr[j];

				arr[j] = arr[j + 1];

				arr[j + 1] = temp;

			}
    for(int i =0; i< count;i++){
        printf("%d", arr[i]);
    }
    printf("\n");

    return 0;
}