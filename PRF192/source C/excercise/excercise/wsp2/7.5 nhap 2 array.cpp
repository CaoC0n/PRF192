#include<stdio.h>

int main()
{
	int a[1000],b[1000];
	int n;
	scanf("%d",&n);	
	
	printf("Nhap day a[i] la: ");
	for (int i=0; i<n; i++)
		scanf("%d",&a[i]);
		
	printf("Nhap day b[i] la: ");	
	for (int i=0; i<n; i++)
		scanf("%d",&b[i]);
		
	printf("Tinh day c[i] la: ");
	for (int i=0; i<n; i++)	
		printf("%3d",a[i] + b[i]);
}
