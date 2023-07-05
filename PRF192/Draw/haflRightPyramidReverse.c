/*
*****
 ****
  ***	 
   **
    *
*/

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int i, j, k;
	for(i = n; i >= 1; i--) {
		for(k = n-i; k > 0; k--) {
			printf(" ");
		}
		for(j = i; j > 0; j--) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
