#include <stdio.h>


int main() {
	double a[50];
	int n;
	printf("N = ");
	scanf("%d", &n);
	
	printf("Enter %d numbers: ", n);
	for(int i = 0; i < n; i++) {
		scanf("%lf", &a[i]);
	}
	
	int x;
	printf("X = ");
	scanf("%d", &x);
	
	double sum = 0;
	int count = 0;
	double avg = 0;
	
	for(int j = 0; j < n; j++) {
		if(a[j] > x) {
			count++;
			sum += a[j];
			avg = (double)(sum / count);
			
		}
	}
	puts("\nOUTPUT:");
	printf("%.2lf", avg);
	
}