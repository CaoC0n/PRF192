#include <stdio.h>

int main() {
	int n;
	while(n <= 0 || n >= 10) {
		scanf("%d", &n);
	}
	int a[20];
	int i;
	for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	int p = 1;
	for(i = 0; i < n; i++) {
		if(a[i] % 2 == 0) {
			p *= a[i];
		}
	}
	puts("\nOUTPUT:");
	printf("%d", p);
	return 0;
}
