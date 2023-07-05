#include<stdio.h>
#include<math.h>

int main()
{
	int n,i,j;
	for(i=2;i<=10;i++)
	{	
		for(j=1;j<=10;j++)
			printf("%4d",i*j);	
		printf("\n");
	}	
}
