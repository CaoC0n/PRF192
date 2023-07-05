#include<stdio.h>
#include<string.h>

void Timkiemtu(char s1[], char s2[],int c[100],int *n)
{ 
  *n = 0; 
  int m = 0; 
  int a = strlen(s1); 
  int b = strlen(s2); 
  int start,i,j,check; 
  for(i = 0; i < a; i++)
  { 
     if(s1[i] == s2[0])
      { 
        start = i; 
        check = 1; 
        int temp = start; 
        for(j = 1; j < b; j++)
         { 
            if(s1[++temp] != s2[j])
            {
			  check = 0;
			  break;  
			} 
		 }
		 if(check == 1)
		 { 
		  c[m] = start;
		  m++; 
		  (*n)++; 
		 }
	  }
  }   
}
int main()
{ 
  char a[100] = {'a','b','c','d','e'}; 
  char b[100]= {'f','e'}; 
  int c[100],n,i;
//  gets(a); 
//  gets(b); 
  	Timkiemtu(a,b,c,&n);   
  	for(i = 0; i < n; i++)
    	printf("%d ",c[i]);
	if ( n ==0 ) printf("-1");
	return 0;
}
