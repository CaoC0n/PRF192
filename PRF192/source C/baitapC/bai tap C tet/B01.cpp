#include<stdio.h>

int main()
{
	int n,sum=0;
	scanf("%d",&n);
	printf("Cac uoc so lan luot la: ");
	
	for(int i=1; i<=n; i++)
		if(n%i==0) 
		{
			sum++;
			printf("%3d",i);
		}
	printf("\nCo %d uoc so",sum);	
}
