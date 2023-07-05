/*
    *
   **
  ***	
 ****
*****
*/

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int i, j, k;
	for(i = 1; i <= n; i++) {
		for(k = n-i; k > 0; k--) {
			printf(" ");
		}
		for(j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
