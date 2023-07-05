#include<stdio.h>

int main()
{
	int a[1000];
	int n,check=1;
	scanf("%d",&n);	
	
	printf("Nhap day a[i] la: ");
	for (int i=0; i<n; i++)
		scanf("%d",&a[i]);
	
	for (int i=0; i<n; i++)
		if(a[i] != a[n-i-1]) check=0;
		
	if(check == 1) printf("Day doi xung");
	else printf("Day ko doi xung");
}
