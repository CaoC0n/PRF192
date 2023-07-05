#include<stdio.h>

void arrange(int a[],int n)
{
	for(int i=0; i<n; i++)
	{	
		int min=a[0];
		for(int j=i+1; j<n; j++)
			if(a[j]<a[i])	
			{
				min=a[j];
				a[j]=a[i];
				a[i]=min;
			}
	}
}
int main()
{
	int a[1000],b[1000],c[1000],m,n;
	printf("Nhap so nguyen n: ");
	scanf("%d",&n);		
	for (int i=0; i<n; i++)
	{
		printf("Nhap day a[%d] la: ",i);
		scanf("%d",&a[i]);
		c[i]=a[i];
	}		
	printf("\nNhap so nguyen m: ");	
	scanf("%d",&m);			
	for (int i=0; i<m; i++)
	{
		printf("Nhap day b[%d] la: ",i);
		scanf("%d",&b[i]);
		c[n+i]=b[i];
	}
	arrange(c,m+n);
	for (int i=0; i<m+n; i++)
		printf("%3d",c[i]);
}
