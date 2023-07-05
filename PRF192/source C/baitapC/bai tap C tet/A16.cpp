#include<stdio.h>

int main()
{
	int a[1000];
	int n,x,count=0;
	printf("Day so gom: ");
	scanf("%d",&n);
	printf("So x bat ky: ");
	scanf("%d",&x);
	
	for(int i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
		if(x==a[i]) count++;
	}
	printf("So lan xuat hien cua x trong day la: %d",count);
}
