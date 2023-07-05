#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n;
  scanf("%d", &n);
  int a[10];
  for(int i = 0; i < n; i++) {
  	scanf("%d", &a[i]);
  }
  int flag = 0;
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for(int j = 0; j < n; j++) {
  	if(a[j] % 2 == 0) {
  		flag = 1;
  	}
	}
   if(flag == 0) {
		printf("Odd array of %d elements", n);
   } else {
	  	printf("Not odd array of %d elements", n);
	  	
	  }









  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
