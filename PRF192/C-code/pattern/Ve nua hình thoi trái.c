//Vi du n=4
/*
   *
  **
 ***
****
 ***
  **
   *	
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
 
 
int main() {
  
  	int n;
  	scanf("%d", &n);
  	int i,j;
 
 
  	for(i = 0; i < 2*n - 1;i++){
  		for(j = 0; j < n;j++)
		{
			if(i >= n -1 - j && i <= n -1 +j)
			printf("*");
	
		else printf(" ");
		}	
		printf("\n");
	}
 
  return(0);
}

