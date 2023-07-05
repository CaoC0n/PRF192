#include <stdio.h>

int main() {
	int r;
	scanf("%d", &r);
	int count = 1;
	
	while(r > 20) {
		scanf("%d", &r);	
	}
	for(int i = 1; i <= r; i++) {
		for(int j = 1; j <= i; j++) {
			printf("%d ", count++);
		}
		printf("\n");
	}
	
	return 0;
}