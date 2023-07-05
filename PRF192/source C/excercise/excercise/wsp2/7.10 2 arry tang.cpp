#include<stdio.h>

int main()
{
	int a[100],b[100],c[200],m,n;			
	int i,j;
	printf("Nhap so nguyen n: ");
	scanf("%d",&n);		
	for (i=0; i<n; i++)
		scanf("%d",&a[i]);
				
	printf("\nNhap so nguyen m: ");	
	scanf("%d",&m);			
	for (i=0; i<m; i++)
		scanf("%d",&b[i]);
		
	j=0;i=0;
	while(1)		
	{	
		if(i==0 ||j==0) break;
		if (a[i]<b[j]) 
		{
			c[i+j]=a[i];
			i++;
		}
		else 
		{
			c[i+j]=a[j];
			j++;
		}
	}
	if (i==n) // dua not b
		for (; j<m; j++)
			c[i+j] = b[j];
	else if (j==m) // dua not a
		for (; i<n; i++)
			c[i+j] = a[i];
	
	for (j=0; j < m+n; j++)
		printf("%2d",c[j]);
}
