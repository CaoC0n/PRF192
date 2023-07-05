#include <stdio.h>

int main() {
	int n;
	int count = 0;
	scanf("%d", &n);
	while(n < 0) {
		printf("Try again\n");
		scanf("%d", &n);
	}
/*	int i;
	for(i = n; i > 0; i /= 10) {
		count++;
	}
*/	
	while(n > 0) {
		n /= 10;
		count++;
	}
	printf("Numbers of digits: %d", count);
}