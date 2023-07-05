#include <stdio.h>


void inputArr(float a[], int n) {
	for(int i = 0; i < n; i++) {
		printf("arr[%d] = ", i);
		scanf("%f", &a[i]);
	}
}


void posNegative(float a[], int n) {
	printf("Position of negative in array: ");
	for(int i = 0; i < n; i++) {
		if(a[i] < 0) {
			printf("arr[%d], ", i);
		}
	}
}


int main() {
	float a[50];
	int n;
	scanf("%d", &n);
	
	inputArr(a, n);
	posNegative(a, n);
	return 0;
}