#include<stdio.h>
#include<limits.h>

int main()
{
	int a[1000];
	int n,min=INT_MAX;
	scanf("%d",&n);	
	
	for (int i=0; i<n; i++)
	{	
		scanf("%d",&a[i]);
		if (a[i]<min) 	min=a[i];
	}	
	for (int i=0; i<n; i++)
		if(min==a[i]) printf("\nSo be nhat trong day la: %d tai vi tri thu %d",min,i+1);
}
