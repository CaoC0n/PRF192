#include <stdio.h>

void input(int *arr, int *n) {
	printf("Nhap n: ");
	scanf("%d", n);
	int i;
	for(i = 0; i < *n; i++) {
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}

int inputK(int n) {
	int k = -1;
	while(k < 0 || k >= n) {
		printf("Nhap k(0 <= k < n): ");
		scanf("%d", &k);
	}
	return k;
}

void remove(int *arr, int *n, int k) {
	int i;
	for(i = k; i < *n - 1; i++) {
		arr[i] = arr[i + 1];
	}
}

void show(int *arr, int n) {
	int i;
	for(i = 0; i < n; i++) {
		printf("%-10d", arr[i]);
	}
}

int main() {
	int n;
	int arr[100];
	input(arr, &n);
	int k = inputK(n);
	remove(arr, &n, k);
	n--;
	show(arr, n);
	return 0;
}
