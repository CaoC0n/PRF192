#include <stdio.h>

int main() {
	double a, b;
	scanf("%lf%lf", &a, &b);
	
	puts("\nOUTPUT:");
	printf("%.2lf", a * b);
	return 0;
}