#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n;
  while(n <= 0 || n >= 20) {
  	scanf("%d", &n);
  }
  int a[100];
  int i;
  for(i = 0; i < n; i++) {
  	scanf("%d", &a[i]);
  }

  int flag = 1;
  
  for(i = 0; i < n; i++) {
  	if(a[i] != a[n - i - 1]) {
  		flag = 0;
	  }
  }
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("%d", flag);








  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
