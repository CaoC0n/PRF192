#include<stdio.h>

int main()
{
	int n,x,y,i;

	scanf("%d",&n);
	for(x=1;x<=n;x++)
	{	
		for(y=1;y<=n;y++)
		{
			if (x <= y ) // tam giac can nguoc
		//	if (x >= y ) // tam giac vuong
		//	if (x + y <= n +1)
				printf("%d ",x);								
			else printf(" ");
		}	
	printf("\n");
	}
}
