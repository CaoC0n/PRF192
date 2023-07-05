#include<stdio.h>

int main()
{
	int a[100][100],m,n;
	printf("Nhap m: ");
	scanf("%d", &m);
	n=m;
	for (int i = 0; i < m; i++) 
		for (int j = 0; j < n; j++) 
			scanf("%d", &a[i][j]);
	
	for (int i = 0; i < m; i++) 
	{
		for (int j = 0; j < n; j++) 
			printf("%3d",a[i][j]);		
		printf("\n");
	}
	printf("Bien doi: \n");
	int b[100][100];
	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < m; j++) 
			if(a[i][j] == 1)
			{
				for (int z = 0;z < m; z++) 				
				{
					b[i][z] = 1;
					b[z][j] = 1;
				}	
			}
//			else b[i][j]= a[i][j];
//		if(a[i][j] ==0)
//			b[i][j]= 0;
//		else b[i][j]= 1;
	//	printf("\n");
	}	
	
	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < m; j++) 
			printf("%d", b[i][j]);
		printf("\n");
	}	
}
