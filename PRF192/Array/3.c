#include <stdio.h>

void inputArr(int a[], int n) {
	printf("Enter %d numbers:\n", n);
	for(int i = 0; i < n; i++) {
		printf("arr[%d] = ", i);
		scanf("%d", &a[i]);
	}
}


int check(int a[], int n) {
	int flag = 0;
	for(int i = 0; i < n; i++) {
		if(a[i] % 2 == 0 && a[i] < 2004) {
			flag = 1;
		}
	}
	return flag;
}


void showArr(int a[], int n) {
	for(int i = 0; i < n; i++) {
		printf("%4d ", a[i]);
	}
}


int main() {
	int a[50];
	int n;
	scanf("%d", &n);
	
	inputArr(a, n);
	showArr(a, n);
	
	int flag = check(a, n);
	if(flag == 1) {
		printf("\nExist\n");
	} else {
		printf("\nNot exist!");
	}
	
	return 0;
}