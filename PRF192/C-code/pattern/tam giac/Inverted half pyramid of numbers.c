/* Example 5: Inverted half pyramid of numbers
1 2 3 4 5
1 2 3 4 
1 2 3
1 2
1
*/

#include <stdio.h>
int main() {
   int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = rows; i >= 1; --i) {
      for (j = 1; j <= i; ++j) {
         printf("%d ", j);
      }
      printf("\n");
   }
   return 0;
}
