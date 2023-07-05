#include <stdio.h>
#define pi 3.14

int main() {
	int r;
	scanf("%d", &r);
	double c = 0;
	c = 2 * pi * r;
	puts("\nOutput:");
	printf("%.2lf", c);
	
	return 0;
}