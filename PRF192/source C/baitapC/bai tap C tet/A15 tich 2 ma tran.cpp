#include<stdio.h>
#include <string.h>

int main()
{
	char a[100][100];
	int k,n;

	for (int i = 0; i < 5; i++)  
		scanf("%s", &a[i]);
	
	int i,j;
	char tg[100] ="";
	for(i=0; i< 5; i++)
	{	
		for(j=i+1; j<5; j++)
			if((int) (a[j][0] )< (int)a[i][0])
			{
				strcpy(tg,a[j]);
				strcpy(a[j],a[i]);
				strcpy(a[i],tg);
			}
	}	
		
	for (int i = 0; i < 5; i++) 
		printf("%s\n", a[i]);	
}
