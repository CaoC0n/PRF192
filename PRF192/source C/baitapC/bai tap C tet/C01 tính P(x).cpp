#include<stdio.h>

int main()
{
	float a[1000],n,x;
	scanf("%f%f",&n,&x);
	
	for(int i=0; i<=n; i++)
		scanf("%f",a[i]);
	
	float s=a[n];
	for(int i=n; i>=0; i--)
		s=(s+a[i-1])*x;	
	printf("Tong: %f",s);
}
