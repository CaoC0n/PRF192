#include <stdio.h>


int main() {
	int n;
	int a[100];
	scanf("%d", &n);
	int i, j;
	for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	
	
	puts("Output:");
	for(j = 0; j < n; j++) {
		if(a[j] % 2 == 0) {
			printf("%d\n", a[j] * a[j]);
		}
	}
	
	return 0;
}
