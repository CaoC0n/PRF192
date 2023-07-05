#include <stdio.h>

int main() {
	float a[5];
	int n = 5;
	int i, j;
	for(i = 0; i < n; i++) {
		scanf("%f", &a[i]);
	}
	for(i = 0; i < n-1; i++) {
		for(j = i+1; j < n; j++) {
			if(a[i] > a[j]) {
				float temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	puts("\nOUTPUT:");
	for(i = 0; i < n; i++) {
		printf("%.3f", a[i]);
		if(i != n-1) {
			printf(">");
		}
	}
	
	return 0;
}
