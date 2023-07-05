#include<stdio.h>

int main()
{
	double a,b,c,d;
	printf("Nhap so tu thuc: ");
	scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
	double max1=a,max2=c;
	
	if(b>a) max1=b;
	if(d>c) max2=d;
	if(max1>max2) printf("Gia tri lon nhat la: %lf",max1);
	else printf("Gia tri lon nhat la: %lf",max2);
}
