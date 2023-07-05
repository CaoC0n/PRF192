#include <stdio.h>  
  

int main (){   
    int a[20], n;  
    int i, j, k;
    printf ("N = ");  
    scanf (" %d", &n);  
     
	while(n <= 0 || n >= 10) {
		printf ("N = ");  
    	scanf (" %d", &n); 
	} 
	
    printf ("Enter %d elements: ", n);  
    for (i = 0; i < n; i++)  {  
        scanf (" %d", &a[i]);  
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
    printf("\nOUTPUT:");  
    for (i = 0; i < n; i++)  {  
        printf ("\n%d", a[i]);  
    }  
    return 0;  
}  
