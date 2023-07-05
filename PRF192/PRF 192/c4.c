#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	puts("Output:");
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= i; j++) {
			printf("%d ", j);
		}
		printf("\n");
	}
}