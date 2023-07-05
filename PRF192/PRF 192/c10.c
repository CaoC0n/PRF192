#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int sum = 0;
	
	for(int i = 1; i < n; i++) {
			if(n % i == 0) 
				sum += i;
			
	}
	puts("Outputs:");
	if(sum == n) {
				printf("%d is a perfect number\n", n);
			} else {
				printf("%d is not a perfect number\n", n);
			}
	return 0;
}