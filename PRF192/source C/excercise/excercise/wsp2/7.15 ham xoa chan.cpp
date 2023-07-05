#include<stdio.h>

void del(int a[], int *n, int k)
{
	int i;
	for (i=k; i<*n-1; i++)
		a[i] = a[i+1];
	(*n)--;
}

main()
{
	int a[100]={2,3,4,6,10};
	int i, n= 5;
	for (i=0; i<n; i++)
		if (a[i]%2 == 0)
		{
			del(a,&n,i);
			i--;
		}
	for (i=0; i<n; i++)
		printf("%5d",a[i]);
}
