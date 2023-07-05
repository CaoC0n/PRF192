#include<stdio.h>
void tach(int x, int a[],int *i)
{
	(*i)=0;
	a[0]=0;
	while(x!=0)
	{
		a[*i] = x%10;
		x=x/10;
		(*i)++;
	}
}

int main()
{
	int x,i,a[50],n;
	printf("Nhap so nguyen: ");
	scanf("%d",&x);
	
	tach(x,a,&n);
	for (i=0; i<n; i++)
		printf("%d",a[i]);	
}
