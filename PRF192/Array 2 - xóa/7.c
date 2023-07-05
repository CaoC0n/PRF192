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


int firstPositive(int n) {
	while(n >= 10) {
		n /= 10;
	}
	if(n % 2 == 0) {
		return 1;
	}
	return 0;
}


int sum(int *a, int n) {
	int sum = 0;
	for(int i = 0; i < n; i++) {
		if(firstPositive(a[i]) == 1) {
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

	printf("\nTong cac gia tri co chu so dau tien la so chan la: %d", sum(a, n));

	return 0;
}
