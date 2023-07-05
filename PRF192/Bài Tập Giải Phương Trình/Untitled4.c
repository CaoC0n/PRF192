#include <stdio.h>

int main() {
	float x;
	scanf("%f", &x);
	float f1 = 0;
	float f2 = 0;
	if(x >= 5) {
		f1 = 2*x*x + 5*x + 9;
		printf("%f", f1);
	} else {
		f2 = -2*x*x + 4*x - 9;
		printf("%f", f2);
	}

}