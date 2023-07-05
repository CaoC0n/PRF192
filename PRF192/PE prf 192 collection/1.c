#include <stdio.h>

int main() {
	double x, y;
	scanf("%lf%lf", &x, &y);
	puts("\nOUTPUT:");
	printf("%.5lf", x*x*x + x*y);
	return 0;
}
