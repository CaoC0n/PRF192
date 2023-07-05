#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	if(a > b) {
		if(a > c) {
			printf("%d la so lon nhat\n", a);
		} else {
			printf("%d la so lon nhat\n", c);
		}
	} else {
		if(b > c) {
			printf("%d la so lon nhat\n", b);
		} else {
			printf("%d la so lon nhat\n", c);
		}
	}
	return 0;
}