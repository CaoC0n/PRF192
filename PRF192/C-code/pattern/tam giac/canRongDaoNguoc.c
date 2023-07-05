#include <stdio.h>

int main() {
	int n;
	int k;
	scanf("%d", &n);
	k = n-1;
	int i, j;
	for(i = 0; i < 2*n-1; i++) printf(" * ");
	printf("\n");
	
	for(i = n-2; i >=0; i--) {
		for(j = 0; j < 2*n-1; j++) {
			if(j == k+i  || j == k-i) printf(" * ");
			else printf("   ");	
		}
		printf("\n");
	}

	return 0;
}

