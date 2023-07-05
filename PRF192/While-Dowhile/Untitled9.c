#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	while(n < 0){
		printf("Try again!\n");
		scanf("%d", &n);
	}
	int mul = 0; 
	int i;
	for(i = 1; i <= 10; i++) {
		printf("\n%d * %d = %d\n ", n, i, n * i);
	}
	
}