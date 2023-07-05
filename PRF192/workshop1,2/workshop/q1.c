#include <stdio.h>

int main() {
	double x;
	scanf("%lf", &x);
	double y;
	scanf("%lf", &y);
	double sum = 0;
	sum = 2*x*x + 3*y + 4;
	puts("\nOutput:");
	printf("%.4lf", sum);
	return 0;
}