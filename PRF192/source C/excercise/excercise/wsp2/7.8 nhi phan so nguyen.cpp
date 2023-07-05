#include<stdio.h>
void decToBin(int n){
	int i=1,size=1;
	int a[1000];
	while(n>0)
	{
		a[size]= n%10;
		n = n/10;
		size++;
	}	
	for (i=size-1 ; i>0 ; i--)
		printf("%d",a[i]);
	}
int main()
{
	int n;
	scanf("%d",&n);
	decToBin(n);
}
