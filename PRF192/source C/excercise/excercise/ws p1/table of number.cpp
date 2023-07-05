#include<stdio.h>
#include<math.h>

int main()
{
	int i,j;
	for(i=1;i<=10;i++)
	{	
		for(j=i;j<=100;j+=10)
			printf("%4d",j);	
		printf("\n");
		
	}	
}
