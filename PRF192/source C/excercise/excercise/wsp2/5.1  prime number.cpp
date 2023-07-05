#include<stdio.h>

int find(int n)
{	
	int i; 
	if(n<2) return 0;
	if(n==2) return 1;
	for ( i=2; i<n; i++)
		if(n%i==0) return 0;
	return 1;
}	

int main()
{
	int n,i,sum=0;
	printf("Enter n: ");
	scanf("%d",&n);
	int a[100];
	for (i=0; i<n; i++)
	{
		printf("Nhap a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for (i=0; i<n; i++)	
		printf("%4d",a[i]);
	for (i=0; i<n; i++)	
		if (find(a[i]) == 1) 
		{
			sum+= a[i];
			break;
		}
	printf("\n%d",sum);
}
