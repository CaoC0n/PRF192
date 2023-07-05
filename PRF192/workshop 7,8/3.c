#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

	int i;
	char fullname[100];
	gets(fullname);	
		fullname[0] = toupper(fullname[0]);
	for (i=0; fullname[i] != '\0';i++){
		if(isspace(fullname[i]))
			fullname[i+1] = toupper(fullname[i+1]);
	}	
		
	
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
	puts(fullname);



  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
