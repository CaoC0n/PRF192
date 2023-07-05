#include <stdio.h>

int main() {
	int x, y ,z;
	scanf("%d%d", &x, &y);
/*
	if (x < y) {
		z = 3 * x + y - 2;
	}else {
		z = 4 * x + y - 2; 
	} 
*/
	int s = 0;
	s = (x < y) ? (z = 3*x + y-2) : (z = 4*x + y-2);
	
	printf("%d", s);
}