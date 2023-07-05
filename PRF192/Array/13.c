#include <stdio.h>


void inputArr(float a[], int n) {
	printf("Enter %d numbers:\n", n);
	for(int i = 0; i < n; i++) {
		printf("arr[%d] = ", i);
		scanf("%f", &a[i]);
	}
}


int minPositiveNumb(float a[], int n) {
	int min = 10000;
	for(int i = 0; i < n; i++) {
		if(a[i] > 0) {
			min = a[i];
			break;
		}
	}
	for(int i = 0; i < n; i++) {
		if(a[i] > 0 && min > a[i]) {
			min = a[i];
		}
	}
	if(min == 10000) {
		return -1;
	}
	return min;
}


int main() {
	float a[50];
	int n;
	scanf("%d", &n);
	
	inputArr(a, n);
	for(int i = 0; i < n; i++) {
		int min = minPositiveNumb(a, n);
		if(a[i] == min) {
			printf("\nVi tri mang thu %d la vi tri so nguyen duong nho nhat!", i);
		} 
	}	

	return 0;
}