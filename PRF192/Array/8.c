#include <stdio.h>

void inputArr(float a[], int n) {
	for(int i = 0; i < n; i++) {
		printf("arr[%d] = ", i);
		scanf("%f", &a[i]);
	}
}


int firstPositive(float a[], int n) {
	for(int i = 0; i < n; i++) {
		if(a[i] > 0) {
			return a[i];
		}
	}
	return -1;
}

int main() {
	float a[50];
	int n;
	scanf("%d", &n);
	
	inputArr(a, n);
	printf("\n%d", firstPositive(a, n));
	return 0;
}