#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n;
  while (n <= 0 || n >= 10) {
  	scanf("%d", &n);
  }
  int i, j;
  int k;
  int a[100];
  for(i = 0; i < n; i++) {
  	scanf("%d", &a[i]);
  }
  
  for (i = 0; i < n; i++) {
    if(a[i] % 2 != 0) {  
    	for (j = i + 1; j < n; j++) { 		  
            if (a[i] == a[j]){                  
                for (k = j; k < n - 1; k++)  {  
                		a[k] = a[k + 1];  
    				}   
                	n--;  
                	j--;      
        		}  
			}
    	} 
	}
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for(i = 0; i < n; i++) {
  	printf("%d\n", a[i]);
  }








  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
