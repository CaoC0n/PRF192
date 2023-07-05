#include <stdio.h>
#include <math.h>
#include <stdbool.h>


void inputArr(int a[], int n) {
	for(int i = 0; i < n; i++) {
		printf("arr[%d] = ", i);
		scanf("%d", &a[i]);
	}
}


bool check(int n) {
	if(n < 2) {
		return false;
	} 
	for(int i = 2; i <= sqrt(n); i++) {
		if(n % i == 0) {
			return false;
		}
	}	
	return true;
}


int fun(int a[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++)
        if (check(a[i]) == true && a[i] < 100)
            count++;
    return count;
}


void showArr(int a[], int n) {
	for(int i = 0; i < n; i++) {
		printf("%2d ", a[i]);
	}
}


int main() {
	int a[50], n;
	scanf("%d", &n);
	
	inputArr(a, n);
	showArr(a, n);
	
	printf("\nCo %d so nguyen to nho hon 100!", fun(a, n));
	
	
	return 0;
}