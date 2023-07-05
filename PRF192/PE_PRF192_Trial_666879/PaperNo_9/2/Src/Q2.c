#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n;
  while(n <= 0) {
  	scanf("%d", &n);
  }
  int sum = 0;
  int count = 0;
  int i;
  for(i = n; i >= 0; i--) {
  	if(count < 3 && i % 2 == 0) {
  		count++;
		sum += i;
	  }
  }
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("%d", sum);








  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
