#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	while(n < 0) {
		printf("Enter n: ");
		scanf("%d", &n);
	}
	int i;
	int sum = 0;
	for(i = 1; i <= n; i++) {
		if(i % 2 != 0) {
			sum += i;	
		}
	}
	printf("%d", sum);
}