#include <stdio.h>

int main() {
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	
	int p = 1;
	for(int i = 1; i <= b; i++){
		p *= a;
	}
	puts("\nOutput:");
	printf("%d", p);
}