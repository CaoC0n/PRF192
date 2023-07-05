#include<stdio.h>

int main()
{
	int a[1000];
	int n = 6;
	int s = 0;
	for (int i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
		if (a[i]%2 !=0) s+= a[i];
	}	
	printf("%d",s);
}
