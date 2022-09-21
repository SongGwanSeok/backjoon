#include <stdio.h>

int main() {
	long long int tc, a, b;
	scanf("%lld", &tc);
	for(int i=0; i<tc; i++) {
		scanf("%lld %lld", &a, &b);
		long long int result = 1;
		for(int j=1; j<=b; j++) {
			result *= a;
			result %= 10;
			if(result == 0)
				result = 10;
		}
		printf("%lld\n", result);
	}
}