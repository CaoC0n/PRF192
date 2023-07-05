#include <stdio.h>


void inputArray(float a[],int n){
	int i;
	for (i= 0; i< n; i++){
		scanf("%f", &a[i]);
    }
   	printf("Mang da nhap:");
    for (i = 0; i < n; i++){
		printf("%f ", a[i]);
	}
}

void deleteNegative(float a[],int n){
	int i;
	for( i=0;i<n;i++){
		if(a[i]>0){
			printf("%f ",a[i]);
		}
	}	
}

int main(){
	float a[50];
	int n;
	printf("Nhap so phan tu: ");
    scanf("%d", &n);
	inputArray(a,n);
	printf("\nAfter delete:");
	deleteNegative(a,n);
	
}
