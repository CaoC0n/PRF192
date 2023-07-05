#include<stdio.h>

int main()
{
	int n;
	float S=0;
	scanf("%d",&n);
	
	for(float i=1; i<=n; i++)
		S+= 1/i;
	printf("Tong la: %f",S);
}
