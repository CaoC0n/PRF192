//nhap vao mot so tu nhien n, in ra 4 so nguyen to gan nhat lon hon n 
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>
 
bool isPrime(int n)	// ham kiem tra so nguyen to
{
	if( n < 2)
		return false;
	int i;
	for(i = 2; i <= sqrt(n);i++)
	{
		if(n % i == 0)
			return false;
	}
	return true;
}
 
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  	int count = 4;
  	int n;
  	scanf("%d", &n);
  	int i = 1;

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	while(count > 0)	// in ra 4 so nguyen to lon hon n
	{
		if(isPrime(n + i))
		{
			printf("%d\n", n + i);
			count--;
		}
		i++;
	}

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  system ("pause");
  return(0);
}

