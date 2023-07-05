#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n;
  int a[10];
  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
  	scanf("%d", &a[i]);
  }
  
  int flag = 0;
  for(int j = 0; j < n; j++) {
  	if(a[j] % 2 != 0) {
  		flag = 1;
	  }
  }
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  if(flag == 0) {
  	printf("Even array of %d elements", n);
  } else {
  	printf("Not even array of %d elements", n);
  }
  //@STUDENT: WRITE YOUR OUTPUT HERE:








  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
