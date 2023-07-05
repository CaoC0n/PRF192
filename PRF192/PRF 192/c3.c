#include <stdio.h>

int main() {
	int n = 5;
	int a[100];
	int i, j;
	for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	
	for(i = 0; i < n-1; i++) {
		for(j = i+1; j < n; j++) {
			if(a[i] > a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	
	puts("Outputs: ");
	for(i = 0; i < n; i++) {
		if(a[i] % 2 != 0) {
			printf("%d\n", a[i]);
		}
	}
	return 0;
}
