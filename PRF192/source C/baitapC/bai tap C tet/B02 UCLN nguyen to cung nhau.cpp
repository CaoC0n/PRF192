#include<stdio.h>

int main()
{
	int m,n,x;
	scanf("%d%d",&m,&n);
	
	for(int i=1; i<m+n; i++)
		if(m%i==0 && n%i==0) 
			x=i;
//	printf("UCLN la: %d",x);
	
	if(x==1) printf("Hai so nguyen to cung nhau");
	else printf("Hai so khong nguyen to cung nhau va UCLN la: %d",x);
}
