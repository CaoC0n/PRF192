#include <stdio.h>

void inputArr(int *a, int *n) {
	printf("Enter n: ");
	scanf("%d", n);
	for(int i = 0; i < *n; i++) {
		printf("arr[%d] = ", i);
		scanf("%d", &a[i]);
	}
}


int lastEvenNumbers(int *a, int n) {
	for(int i = n-1; i > 0; i--) {
		if(a[i] % 2 == 0) {
			return a[i];
		}
	}
	return -1;
}


int main() {
	int n = 0;
	int a[50];
	
	inputArr(a, &n);
	int last = lastEvenNumbers(a, n);
	printf("\nLast Even Numbers: %d", last);
	return 0;
}