#include <stdio.h>


void nhap(int *arr, int *n) {
	*n = 0;
	while(*n <= 0) {
		printf("Nhap n > 0: ");
		scanf("%d", n);
	}
	int i;
	for(i = 0; i < *n; i++) {
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}




void insert(int *arr, int n, int k, int x) {
	int i;
	for(i = n-1; i >= k; i--) {
		arr[i+1] = arr[i];
	}
		arr[k] = x;
	if(k == n-1) {
		arr[k] = arr[n-1];
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
	int arr[50];
	int k, x;
	
	nhap(arr, &n);
	
	
	printf("Nhap x: ");
	scanf("%d", &x);
	printf("Nhap k: ");
	scanf("%d", &k);
	
	insert(arr, n, k, x);
	n++;
	show(arr, n);
	
	return 0;
}
