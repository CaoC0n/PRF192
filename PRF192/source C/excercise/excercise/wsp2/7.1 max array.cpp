#include<stdio.h>
#include<limits.h>

int main() 
{
	double n,max=INT_MIN;
	scanf("%lf",&n);
	double a[1000];
	if(n==0) 
	{
		printf("So phan tu trong day la: ");
		return 0;
	}
	for (int i=0; i<n; i++)
	{
		printf("Enter a[%d]: ", i);
		scanf("%lf", &a[i]);
		if (a[i] > max) max = a[i];
	}	 
	printf("Gia tri lon nhat la: %lf",max);
}
