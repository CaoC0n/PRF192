#include <stdio.h>

void inputArr(int a[], int n) {
	printf("Enter %d numbers:\n", n);
	for(int i = 0; i < n; i++) {
		printf("arr[%d] = ", i);
		scanf("%d", &a[i]);
	}
}


int minNumb(int a[], int n) {
	int min = a[0];
	for(int i = 0; i < n; i++) {
		if(a[i] < min) {
			min = a[i];
		}
	}
	return min;
}



int main() {
	int a[50];
	int n;
	scanf("%d", &n);
	
	inputArr(a, n);
	int min = minNumb(a, n);
	
	for(int i = 0; i < n; i++) {
		if(a[i] == min) {
			printf("\nTai vi tri thu arr[%d] = %d la gia tri nho nhat trong mang!", i, min);
		}
	}

	return 0;
}