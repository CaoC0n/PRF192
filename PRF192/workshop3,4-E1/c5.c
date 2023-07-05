#include <stdio.h>  
 
int main (){   
    int a[20], n;  
    printf ("N = ");  
    scanf (" %d", &n);  
      
    printf ("Enter %d elements: ", n);  
    for (int i = 0; i < n; i++)  {  
        scanf (" %d", &a[i]);  
    }  
      
    for (int i = 0; i < n; i ++) {  
        for (int j = i + 1; j < n; j++) {   
            if ( a[i] == a[j]){  
                if(a[i] % 2 != 0 || a[j] % 2 != 0) {
                	for (int k = j; k < n - 1; k++)  {  
                    	a[k] = a[k + 1];  
                	}   
                	n--;  
                	j--;      
            	}  
        	}  
		}
    }  
    
    printf ("\nAfter remove odd duplicate: ");  
    for (int i = 0; i < n; i++)  {  
        printf (" %d ", a[i]);  
    }  
    return 0;  
}  