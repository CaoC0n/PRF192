#include<stdio.h>
int main()
{	int m=7;
//	scanf("%d",&m);
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= 5*m; j++)
			if ((i==1 || i==m) && j<=m) 
				printf("*");
			else if (j==(m+1)/2)
				printf("*"); 
			else if ((j==m+i-1||j==m+m+6-i)&& i>=(m-1)/2)
				printf("*");
			else if ((j==m+i+3 ||j==m+m+2-i)&& i<(m+1)/2)
				printf("*");
			else if((j==m+2||j==2*m+3)&& i==2)
				printf("*");
			else if((j==m+3||j==2*m+2)&&i==1)
				printf("*");
			else if((j== 2*m+5||j==3*m+5)&&i!=m)
				printf("*");
			else if(i==m&&j> 2*m+5&&j<3*m+5)
				printf("*");
			else printf(" ");
		printf("\n");
	}
//	printf("\n");
//	for (int i = 1; i <= m; i++)
//	{
//		for (int j = 1; j <= 4*m; j++)
//			if( j==1 || j==m)
//				printf("*");
//			else if((i==j||j==m-i+1)&& i<=(m+1)/2)
//				printf("*");// chu m
//			else if((j==m+2||j==2*m+2)&& i!=1&&i!=m)
//				printf("*");
//			else if((i==1||i==m)&&(j>m+2&&j<2*m+2))
//				printf("*");// chu O
//			else if( j==2*m+4 || j==3*m+4)
//				printf("*");
//			else if((i+2*m+3==j||j==3*m-i+5)&& i<=(m+1)/2)
//				printf("*");
//			else printf(" ");
//		printf("\n");	
//	}
}
