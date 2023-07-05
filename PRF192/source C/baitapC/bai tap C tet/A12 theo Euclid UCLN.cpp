#include<stdio.h>

int main()
{
	int a,b,x;
	scanf("%d%d",&a,&b);
	
	while(b!=0)
	{
		x=a%b;
		a=b;
		b=x;
	}
	printf("UCLN theo Euclid la: %d",a);
}
