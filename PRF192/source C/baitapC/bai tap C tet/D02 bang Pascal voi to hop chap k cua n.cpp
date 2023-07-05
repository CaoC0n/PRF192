#include<stdio.h>

int nCk(int n, int k)
{
	if(k==0|| k==n) return 1;
	return nCk(n-1,k-1) + nCk(n-1,k);
}

int main()
{
	int n;
	scanf("%d",&n);
	
	for (int i=0; i<=n; i++)
	{
		for (int j=0; j<=i; j++)
			printf("%4d",nCk(i,j));
		printf("\n");
	}	
}
