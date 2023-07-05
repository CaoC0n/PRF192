#include <stdio.h>

int main() {
	double a;
	scanf("%lf", &a);
	double b;
	scanf("%lf", &b);
	
	double avg = (a*a + b*b) / 2;
	puts("\nOutput:");
	printf("%.4lf", avg);
}