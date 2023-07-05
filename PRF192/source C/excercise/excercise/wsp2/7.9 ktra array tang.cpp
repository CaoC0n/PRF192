#include<stdio.h>

int main()
{
	int n,a[1000],check=0;
	scanf("%d",&n);
	
	for (int i=0; i<n; i++)
		scanf("%d",&a[i]);
	
	for (int i=n-1; i>=0; i--)
		if (a[i-1]>a[i])	check=i+1;
			
	if (check == 0) printf("day duoc sap xep theo thu tu tang dan");
	else printf("tai vi tri %d lam mat tinh tang dan cua day",check);		
}
