#include<stdio.h>

int main()
{
	int a[1000],n,x,count=0;
	scanf("%d",&n);
	printf("Nhap so nguyen x: ");
	scanf("%d",&x);
	
	for(int i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
		if(x==a[i])	count++;
	}	
	printf("So lan xuat hien x trong day so la: %d",count);
}
