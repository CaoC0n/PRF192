#include <stdio.h>

int main() {
	int m, n;
	scanf("%d", &m);
	scanf("%d", &n);
	while(m <= 0 || n <= 0) {
		scanf("%d", &m);
		scanf("%d", &n);
	}
	printf("\n");
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			if(i == 1 || i == n || j == 1 || j == m) {
				printf(" * ");	
			} else {
				printf("   ");
			}
		}
		printf("\n");
	}
	
	return 0;
}