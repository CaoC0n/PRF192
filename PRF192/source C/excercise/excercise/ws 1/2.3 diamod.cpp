#include<stdio.h>
#include<math.h>

int main()
{
	int n,x,y;
	printf("nhap vao gia tri cua n: ");
	scanf("%d",&n);
	
	for (x=1; x<=2*n-1; x++)
	{	
		for (y=1;y<=2*n-1;y++)
			if (x>=n && y>=x-n+1 && y<= 3*n-x-1)
				printf("*");
			else if (x<=n && y>=n-x+1 && y<=n+x-1)
				printf("*");
			else printf(" ");
		printf("\n");
	}	
}
