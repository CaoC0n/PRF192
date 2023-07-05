#include<stdio.h>
#include<math.h>

int main()
{
	int a[1000];
	int n,i=0,x,f;	
	while (1)
	{
		scanf("%d",&a[i]);
		if (a[i]==0) break;
		i++; n++;
	}	
	printf("Nhap gia tri x: ");
	scanf("%d",&x);	
		
	for (int i=0; i<n; i++)	
		f += a[i]*pow(x,i);
	printf("\nTong F = %d",f);
}
