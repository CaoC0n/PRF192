#include<stdio.h>

int main()
{
	int a[1000],n,k;
	printf("Nhap so nguyen n,k: ");
	scanf("%d%d",&n,&k);		
	for (int i=0; i<n; i++)
	{
		printf("Nhap day a[%d] la: ",i);
		scanf("%d",&a[i]);
	}		
	
//	printf("Day xoa phan tu thu k la: ");
//	for (int i=0; i<n; i++)
//		if (i!=k) 	printf("%d ",a[i]);
	
	for (int i = k; i < n - 1; i++)
		a[i] = a[i+1];
		
	for (int i=0; i < n-1; i++)	
		printf("%3d",a[i]);	
}

