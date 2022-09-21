#include<stdio.h>

int rev(int n) {
	int r = 0;
	
	while (n != 0) {
		r *= 10;
		r += n % 10;
		n /= 10;
	}
	
	return r;
}

int main(){
    int num1, num2;
    int rev_num1, rev_num2;

    scanf("%d %d", &num1, &num2);
    
    rev_num1 = rev(num1);
    rev_num2 = rev(num2);

    if(rev_num1>rev_num2){ printf("%d", rev_num1);}
    else if(rev_num1<rev_num2){printf("%d", rev_num2);}
    

    return 0;
}