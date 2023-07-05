#include <stdio.h>

int main() {
	float n;
	scanf("%f", &n);
	float sum = 0;
	for(int i = 2; i < n; i++) {
		sum += (float)(1/i);	
	}
	printf("%f", sum);
}