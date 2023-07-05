#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void hienThi(int*, int*, int);
void nhap(int *arr, int *n) {
	scanf("%d", n);
	int i;
	for(i = 0; i < *n; i++) {
		scanf("%d", &arr[i]);
	}
}


int chiSo(int *b, int n, int x) {
	int i;
	for(i = 0; i < n; i++) {
		if(b[i] == x) {
			return i;
		}
	}
	return -1;
}


void dem(int *arr, int n) {
	int b[100];
	int dem[100];
	int i;
	int size = 0;
	for(i = 0; i < n; i++) {
		dem[i] = 0;
	}
	for(i = 0; i < n; i++) {
		int index = chiSo(b, size, arr[i]);
		if(index == -1) {
			b[size] = arr[i];
			dem[size] = 1;
			size++;
		} else {
			dem[index]++;
		}
	}
	hienThi(b, dem, size);
}


void hienThi(int *b, int *dem, int n) {
	int i,j,temp;
	for(i =0 ; i< n ;i++){
		if(dem[i] == 2 && b[i] % 2 != 0){
		printf("%d\n",b[i]);
		}
	}
}


int main() {
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n;
	int arr[100];
	nhap(arr, &n);
	
	
	
	
	
	
	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:
	dem(arr, n);
	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}
