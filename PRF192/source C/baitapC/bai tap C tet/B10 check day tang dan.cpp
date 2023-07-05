#include<stdio.h>

void arrange(float a[],int n)
{
	int i,j;
	for( i=0; i<n-1; i++)
	{	
		for( j=i+1; j<n; j++)
			if(a[j]<a[i])	
			{
				float tg=a[j];
				a[j]=a[i];
				a[i]=tg;
			}
	}
}
int main()
{
	float a[1000],n;
	scanf("%f",&n);
	int right;
	
	for(int i=0; i<n; i++)
		scanf("%f",&a[i]);
	for(int i=0; i<n-1; i++)	
		if(a[i]>a[i+1])
		{
			printf("Tai phan tu vi tri thu %d ",i+2);
			right=1;
			break;	
		}	
	if(right==1) printf("day khong duoc sap xep theo thu tu tang dan");
	else printf("day duoc sap xep theo thu tu tang dan");
}
