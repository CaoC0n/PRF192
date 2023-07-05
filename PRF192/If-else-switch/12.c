#include <stdio.h>

int main() {
	float a, b, c;
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	
	if(b + c > a && a + c > b && a + b > c) {
		printf("Triangle is valid");
	} else {
		printf("Triangle is invalid");
	}
	return 0;
}