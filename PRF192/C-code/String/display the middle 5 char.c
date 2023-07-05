// display the middle 5 character of a string with an odd number of character

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
 
int main()
{
  system("cls");
  // INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  char str[100];
  gets(str);
  int j = strlen(str);
  int i;
 
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for (i = j / 2 - 2; i <= j / 2 + 2; i++)
  {
    printf("%c", str[i]);
  }
 
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system("pause");
  return (0);
}

