/*
convert dec to binary
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int binToDec(long long binaryNumber) {
	int p = 0;
	int decNumber = 0;
	while(binaryNumber > 0) {
		decNumber += (binaryNumber % 10) * pow(2, p);
		++p;
		binaryNumber /= 10;
	}
	return decNumber;
}


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  long long binaryNumber;
  scanf("%d", &binaryNumber);
  
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("%d", binToDec(binaryNumber));
  
  
  
    
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
