/*
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int i, j, rows;
  scanf("%d", &rows);
  
  
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for(i = 1; i <= rows; i++) {
  	for(j = 1; j <= i; j++) {
  		printf("%d ", i);
	  }
	  printf("\n");
  }
  







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
