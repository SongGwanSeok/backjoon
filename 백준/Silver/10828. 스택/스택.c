#include<stdio.h>
#include<stdlib.h>
int* push(int *stack, int number);
void top(int *stack);
int* pop(int *stack);
void size();
void empty();
int temp = 0;


int main(){
    int count = 0, num = 0;
    char arr[10] = {0};

    scanf("%d", &count);
    int *stack = (int*)malloc(sizeof(int) * count);

    for(int i = 0; i < count; i++){
        scanf("%s", arr);
        if(arr[0] == 'p' && arr[1] == 'u'){
            scanf("%d", &num);
            push(stack, num);
        }
        else if(arr[0] == 't'){
            top(stack);
        }
        else if(arr[0] == 's'){
            size();
        }
        else if(arr[0] == 'p'&& arr[1] == 'o'){
            pop(stack);
        }
        else if(arr[0]== 'e'){
            empty(stack);
        }
    }

    return 0;
}

int* push(int * stack, int number) {
    stack[temp] = number;
    temp++;
    return stack;
}
void top(int* stack){
    if(temp <= 0){
        printf("-1\n");
    }
    else{
        printf("%d\n", stack[temp - 1]);
    }
}
int* pop(int* stack){
    if(temp>0){
        printf("%d\n", stack[temp - 1]);
        temp--;
    }else if(temp <= 0){
        printf("-1\n");
    }
    return stack;
}
void size(){
    printf("%d\n", temp);
}
void empty(){
    if(temp == 0){
        printf("1\n");
    }
    else{
        printf("0\n");
    }
}