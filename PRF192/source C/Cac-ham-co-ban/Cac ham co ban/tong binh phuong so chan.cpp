#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int isEven(int num)
{
	if(num % 2 == 0) return 1;
	else return 0;
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n;
	scanf("%d",&n);
	int *array = (int*)malloc(n*sizeof(int));
  	for(int i=0;i<n;i++)
  	{
  		scanf("%d",&*(array+i));	
	}
  	int sum = 0;
  	for(int i=0;i<n;i++)
  	{
  		if(isEven(*(array+i)) == 1)
		{
			sum += pow(*(array+i),2);  	
		}	
	}
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	printf("%d",sum);	




  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
