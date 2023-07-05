#include <stdio.h>

int main() {
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
		
	
	if(a > b) {
		int temp = a;
		a = b;
		b = temp;
	}
		
	int product = 1;
	for(int i = a; i <= b; i++) {
		if(i % 2 != 0) {
			product *= i;
		}
	} 

	puts("\nOutput:");
	printf("%d", product);
	return 0;
}
