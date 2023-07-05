#include<stdio.h>

int main() 
{
	double n,max=0;
	scanf("%lf",&n);
	double a[1000];
	
	for(int i=0; i<n; i++)
	{
		printf("Nhap vao cac so thuc a[%d] la: ",i);
		scanf("%lf",&a[i]);
		if(a[i]>max) max=a[i];
	}	 
	printf("Gia tri lon nhat la: %lf",max);
}
