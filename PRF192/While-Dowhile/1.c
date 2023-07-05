#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int i;
	while(n < 0) {
		printf("Try again! ");
		scanf("%d", &n);
	}
	for(i = 1; i <= n; i++) {
		printf("%d, ", i);
	}
}
