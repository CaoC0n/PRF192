#include <stdio.h>


void input(float *a, int *n) {
	*n = 0;
	while(*n <= 0) {
		printf("Nhap n: ");
		scanf("%d", n);
	}
	int i;
	for(i = 0; i < *n; i++) {
		printf("arr[%d] = ", i);
		scanf("%f", &a[i]);
	}
}


int avgPositiveNumb(float *a, int n, int *count) {
	float mul = 1;
	for(int i = 0; i < n; i++) {
		if(a[i] > 0) {
			(*count)++;
			mul *= a[i];
		}
	}
	if(*count > 0) {
		printf("\nAvg of positive numbers: %.2f", (float)(mul/(*count)));
	} else {
		printf("\nHaven't positive numbers in array!");
	}
	return mul;
}


void show(float *a, int n) {
	int i;
	for(i = 0; i < n; i++) {
		printf("%-10.2f", a[i]);
	}
}


int main() {
	float a[50];
	int n;
	input(a, &n);
	show(a, n);
	int count = 0;
	avgPositiveNumb(a, n, &count);

	return 0;
}