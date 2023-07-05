#include <stdio.h>

int main() {
	int h;
	scanf("%d", &h);
	while(h <= 0) {
		scanf("%d", &h);
	}
	printf("\n");
	for(int i = 1; i <= h; i++) {
		for(int j = 1; j <= i; j++) {
			if(j == 1 || j == i || i == h){
				printf(" * ");
			} else {
				printf("   ");
			}
		}
		printf("\n");
	}
}