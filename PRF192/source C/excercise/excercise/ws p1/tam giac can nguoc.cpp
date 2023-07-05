#include<stdio.h>
#include<math.h>

int main()
{
	int n,x,y;
	printf("nhap vao gia tri cua n: ");
	scanf("%d",&n);
	for (x=1; x<=n; x++)
	{	
		for (y=1; y<=2*n; y++)
		//	if ( y >= n-x+1 && y <= n+x-1 ) // tam giac can
			if (y >= x && y <= 2*n-x) // tam giac can nguoc
				printf("*");
			else printf(" ");
		printf("\n");
	}	
}
