#include<stdio.h>

int main()
{	
	int c=64,n,x,y;
	printf("nhap vao gia tri cua n: ");
	scanf("%d",&n);	
	for (x=1; x<=n; x++)
	{	
		for (y=1; y<2*n; y++)
		{	
			for (int i=n-1; i>=0; i--)
				if ((y==x+i || y==2*n-x-i) && n-i<=x)
					printf("%c",c+n-i);
				else printf(" ");
		}	
		printf("\n");
	}
}

//				if ((y==n+x-i || y==n-x+i) && i<=x)
//					printf("%c",c+i-1);
//				else printf(" ");	
