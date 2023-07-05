#include<stdio.h>
#include<string.h>
#include<limits.h>

void arrange(int a[],int n)
{
	int i,j;
	for( i=0; i<n-1; i++)
	{	
		for( j=i+1; j<n; j++)
			if(a[j]> a[i])	
			{
				int tg=a[j];
				a[j]=a[i];
				a[i]=tg;
			}
	}
}
// Q5
void del(int a[], int *n, int k)
{
	int i; 
	for ( i = k; i < *n - 1; i++)
		a[i] = a[i+1];
	(*n)--;		
}
int main() 
{
	int n;
	scanf("%d",&n);
	int a[1000];
	int i,k;
	for ( i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}	 
	scanf("%d",&k);
	for ( i=0; i<n; i++)
		if ( i == k)
			del(a,&n,k);			
	
	// sau chu output
	for ( i=0; i<n; i++)
		printf("%d ", a[i]);
}
