#include<stdio.h>
#include <string.h>

void del(int a[], int *n, int k)
{
	int i;
	for (i=k; i<*n-1; i++)
		a[i] = a[i+1];
	(*n)--;
}
int countNum(int *a,int *n,int *dem)
{
	int i,j;
	for (i=0; i< *n; i++)
		dem[i]=1;
	for (i=0; i< *n; i++)
		for (j=i+1; j< *n; j++)
			if (a[i]==a[j])
			{
				dem[i]++;
				del(a,&(*n),j);
				j--;
			}
}
int maxArr(int a[], int *n)
{
	int i,max = 0;
	for (i=0; i< *n; i++)
		if (a[i] > max) max = a[i];
	return max;
}
int main()
{
	int a[1000];
	int i;
	int n=7;
	int dem[50];	
	for (i=0; i<n; i++)
		scanf("%d",&a[i]);

	countNum(a,&n,dem);

	for (i=0; i<n; i++)	
		if (a[i]<10 || a[i]>=100)
		{
			del(a,&n,i);
			i--;
		}		
	printf("%d",n);
	for (i=0; i<n; i++) 
		printf("%d | %d \n",dem[i], a[i]);
}

