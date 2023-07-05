#include <stdio.h>


void input(int *a, int *n) {
	printf("Nhap n: ");
	scanf("%d", n);
	int i;
	for(i = 0; i < *n; i++) {
		printf("arr[%d] = ", i);
		scanf("%d", &a[i]);
	}
}


int inputX(int n) {
	int x;
	while(x >= n) {
		printf("X = ");
		scanf("%d", &x);
	}
	return x;
}


void del(int *a, int *n, int x) {
	for(int i = x; i < *n-1; i++) {
		a[i] = a[i+1];
	}
	*n -= 1;
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
	
	int x = inputX(n);
	del(a, &n, x);
	show(a, n);
	
	return 0;
}
