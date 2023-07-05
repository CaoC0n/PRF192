#include<stdio.h>

void insert(int a[], int *n, int k, int x)
{
	for (int i = (*n) - 1; i >= k; i--) // 1 2 3 4 5
		a[i+1] = a[i];
		a[k]=x;
	(*n)++;	
}
int main()
{
	int a[1000];
	int size=4;	
	int i;	
	for (i=0; i<size; i++)
	{	
		scanf("%d",&a[i]);
	}
	int p,v;
	scanf("%d%d",&p,&v);			
	insert(a,&size,p,v);
	for (int i = 0; i < size; i++)
		printf("%d ",a[i]);
}
