#include <stdio.h>

int main() {
	int count = 0;
	char n;

	while (scanf("%c", &n) != EOF) {
		if (n == '\n') {
			count++;
		}
	}
	
	printf("%d", count);
	

	return 0;
}