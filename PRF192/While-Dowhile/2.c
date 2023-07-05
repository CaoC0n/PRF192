#include <stdio.h>

int main() {
	int n;
	do {
		printf("Enter n: ");
		scanf("%d", &n);
		int i;
		for(i = n; i > 0; i--) {
			printf("%d, ", i);
		}
	} while(n < 0);
}