#include <stdio.h>

int main() {
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	
	if(a > b) {
		printf("%d la so lon nhat\n", a);
	} else {
		printf("%d la so lon nhat", b);
	}
	return 0;
}