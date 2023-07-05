#include <stdio.h>

void inputArr(float a[], int n) {
	for(int i = 0; i < n; i++) {
		printf("arr[%d] = ", i);
		scanf("%f", &a[i]);
	}
}


float sumNegative(float a[], int n){
	float sum = 0;
	for(int i = 0; i < n; i++) {
		if(a[i] < 0) {
			sum += a[i];
		}
	}
	return sum;
}



int main() {
	float a[50];
	int n;
	scanf("%d", &n);
	
	inputArr(a, n);
	
	float sum = sumNegative(a, n);
	printf("Sum of negative numbers: %.3f", sum);
	
	
	return 0;	
}