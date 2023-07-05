#include <stdio.h>

int main() {
	int rows;
	while(rows <= 0) {
		scanf("%d", &rows);
	}
	int i, j;
	puts("\nOUTPUT:");
	for(i = 1; i <= rows; ++i) {
		for(j = rows; j >= 1; j--) {
  			printf((j == i || j == 1 || i == rows) ? "*" : " ");
		}
		printf("\n");
	}
}
