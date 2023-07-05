#include <stdio.h>

void inputArr(int *a, int *n) {
	*n = 0;
	while(*n <= 0) {
		printf("Enter n: ");
		scanf("%d", n);
	}
	for(int i = 0; i < *n; i++) {
		printf("arr[%d] = ", i);
		scanf("%d", &a[i]);
	}
}


int checkPerfectNumb(int n) {
	int sum = 1;
	for(int i = 2; i < n; i++) {
		if(n % i == 0) {
			sum += i;
		}
	}
	if(sum == n) 
		return 1;
	return 0;
}


int lastPosPerNumb(int *a, int n) {
	for(int i = n-1; i > 0; i--) {
		if(checkPerfectNumb(a[i]) == 1) {
			return i;
		}
	}
	return -1;
}


int main() {
	int n;
	int a[50];
	
	inputArr(a, &n);
	
	printf("\nVi tri %d la so hoan thien cuoi cung!", lastPosPerNumb(a, n));
	return 0;
}