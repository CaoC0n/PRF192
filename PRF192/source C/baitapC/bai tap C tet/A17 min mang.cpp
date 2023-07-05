#include<stdio.h>
#include<limits.h>

int main()
{
	int a[1000];
	int n,count,min=INT_MAX;
	printf("Day so gom: ");
	scanf("%d",&n);
	
	for(int i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<min) 
		{	
			min=a[i];
			count=i+1;
		}
	}
	printf("So be nhat trong day la: %d tai vi tri thu %d",min,count);
	
//	for(int i=0; i<n; i++)
//		if(min==a[i]) printf("Vi tri min trong day la: %d",i+1);
}
