#include<stdio.h>

int main()
{
	int m;
	scanf("%d",&m);
	
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= 8*m; j++)
			if(j==1 || j== m)
				printf("*");	
			else if(i==(m+1)/2 && j<=m)
				printf("*");
			else if(j == 2*m-i+1 || j == 2*m-1+i)
				printf("*");	
			else if(i == m-2 && j>m+2 && j<3*m-2)
				printf("*");
			else if(j == 3*m|| (i == 1 || i==(m+1)/2)&&j>3*m&&j<4*m-1)
				printf("*");
			else if(j== 4*m-1 && i<(m+1)/2 && i!=1)
				printf("*");
			else if(j == 4*m+1 || (i == 1 || i==(m+1)/2)&&j>4*m+1&&j<5*m)
				printf("*");
			else if((j== 5*m) && i<(m+1)/2 && i!=1) 
				printf("*");// chu P	
			else if((i+5*m+1==j && i <= m/2)||j==6*m-i+2)
				printf("*");// chu Y
			else printf(" ");
		printf("\n");	
	}
	printf("\n\n");
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= 6*m; j++)
			if( j==1 || j==m || i==j)
				printf("*");//chu N
			else if((j==m+2||i==1||i==m||i==(m+1)/2)&&j<=2*m+1&&j>m+1)	
				printf("*");// chu E
			else if(i+2*m+2==j||j==4*m-i+2)
				printf("*");
			else if(i+3*m+1==j||j==5*m-i+1)
				printf("*");// chu W
			else printf(" ");
		printf("\n");	
	}
	printf("\n\n");
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= 6*m; j++)
			if((j<=m/2 &&i==j)||j==m-i+1)
				printf("*");// chu Y
			else if((j==m+2||i==1||i==m||i==(m+1)/2)&&j<=2*m+1&&j>m+1)	
				printf("*");// chu E
			else if(j == 3*m-i+3 || j == 3*m+i+1)
				printf("*");	
			else if(i == m-2 && j>2*m+4 && j<4*m)
				printf("*");// chu A
			else if(j == 4*m+2 || (i == 1 || i==(m+1)/2)&&j>4*m+1&&j<5*m+1)
				printf("*");
			else if((j== 5*m+1) && i<(m+1)/2 && i!=1) 
				printf("*");
			else if(i>m/2 && j==i+4*m+1)
				printf("*");	
			else printf(" ");
		printf("\n");	
	}
}
