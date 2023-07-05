#include<stdio.h>

int main()
{
	int a[1000],n,k,x;
	printf("Nhap so nguyen n,k,x: ");
	scanf("%d%d%d",&n,&k,&x);	
	printf("Nhap day a la: ");	
	
//	for (int i=0; i<=n; i++)
//	{
//		if(i==k) a[i]=x;
//		else  scanf("%d",&a[i]);
//	}
	for (int i=0; i<n; i++)
		scanf("%d",&a[i]);
	
	for (int i=0; i<=n; i++)
	{
		a[i+1]=a[i];
		a[k]=x;
		printf("%d ",a[i]);
	}
}

