#include <stdio.h>


int maxArray(float a[], int n) {
	int max = a[0];
	for(int i = 0; i < n; i++) {
		if(a[i] > max) {
			max = a[i];
		}
	}
	return max;
}


int main() {
	float a[20];
	int n;
	printf("N = ");
	scanf("%d", &n);
	
	printf("Enter %d numbers: ", n);
	for(int i = 0; i < n; i++) {
		scanf("%f", &a[i]);
	}
	
	int max = maxArray(a, n);
	
	printf("Max in array: %d", max);
	
	return 0;
}