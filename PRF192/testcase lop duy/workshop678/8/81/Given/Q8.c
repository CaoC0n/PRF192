#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int check(int n) {
	if(n < 2) {
		return 0;
	} 
	int i;
	for(i = 2; i <= sqrt(n); i++) {
		if(n % i == 0) {
			return 0;
		}
	}
	return 1;
}


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int a, b;
  scanf("%d%d", &a, &b);
  int i;
  int count = 0;
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for(i = a; i < b; i++) {
  	if(check(i)) {
  		if(i > a) {
  			count++;
			printf("%d ", i);
		  }
		if(count == 2) {
			break;
		}
	  }
  }	








  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
