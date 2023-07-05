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


void sort(int *a, int n) {
	for(int i = 0; i < n-1; i++) {
		for(int j = i+1; j < n; j++) {
			if(a[i] > a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}


int findPosition(int *a, int n, int x) {
	if(x < a[0]) {
		return 0;
	}
	if(x > a[n-1]) {
		return n;
	}
	int i;
	for(i = 0; i < n; i++) {
		if(a[i] >= x) {
			return i;
		}
	}
}

void insert(int *a, int n, int k, int x) {
	int i;
	for(i = n - 1; i > k; i--) {
		a[i] = a[i - 1];
	}
	a[k] = x;
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
	sort(a, n);
	int x;
	printf("nhap x: ");
	scanf("%d", &x);
	int position = findPosition(a, n, x);
	insert(a, n, position, x);
	show(a, n);

	return 0;
}
