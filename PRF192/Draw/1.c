#include <stdio.h>

int main() {
	int h;
	scanf("%d", &h);
	int m = h, n = h;
	for (int i = 1; i <= h; i++){
      for (int j = 1; j <= 2 * h - 1; j++){
         if (j >= m && j <= n){
            printf(" * ");
		 }else {
            printf("   ");
		 }
      }
      m--;
      n++;
      printf("\n");
   }
}