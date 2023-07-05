#include <stdio.h>

int main() {
	int n;
	printf("n = ");
	scanf("%d", &n);
	int a[100];
	int i, j;
	for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	
	int p;
	printf("p = ");
	scanf("%d", &p);
	
	for(j = 0; j < n; j++) {
		if(j != p-1) {
			printf("%d\n", a[j]);
		}
	}
}
