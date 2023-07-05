#include <stdio.h>
#include <math.h>


void input(int *a, int *n) {
	*n = 0;
	while(*n <= 0) {
		printf("Nhap n: ");
		scanf("%d", n);
	}
	int i;
	for(i = 0; i < *n; i++) {
		printf("arr[%d] = ", i);
		scanf("%d", &a[i]);
	}
}


int findNumbers(int n) {
	n = abs(n);
	n /= 10;
	int numbers = n % 10;
	if(numbers == 5) {
		return 1;
	}
	return 0;
}


int sumOfNumbers(int *a, int n) {
	int sum = 0;
	for(int i = 0; i < n; i++) {
		if(findNumbers(a[i]) == 1) {
			sum += a[i];
		}
	}
	return sum;
}


void show(int *a, int n) {
	int i;
	for(i = 0; i < n; i++) {
		printf("%-10d", a[i]);
	}
}


int main() {
	int a[50];
	int n;
	input(a, &n);
	show(a, n);
	int sum = sumOfNumbers(a, n);
	printf("\nTong cac gia tri co chu so hang chuc la chu so 5 la: %d", sum);

	return 0;
}
