#include<stdio.h>

int sumU(int n)
{
	int u=0;
	for(int i=1; i<n; i++)
		if(n%i==0) u+=i;
	return u;
}

int main()
{
	int a,b;
	printf("Input the starting range or number : ");
	scanf("%d",&a);
	printf("Input the ending range of number : ");
	scanf("%d",&b);
	
	printf("The Perfect numbers within the given range :");
	for( int i=a; i<=b; i++)
		if(sumU(i)==i)	printf("%3d",sumU(i));
}
