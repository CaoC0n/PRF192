#include<stdio.h>

int main()
{
	double coreMoney,profit;
	printf("So tien gui tiet kiem la: ");
	scanf("%lf",&coreMoney);
	int n;
	printf("So nam gui tiet kiem la: ");
	scanf("%d",&n);
	
	for(int i=1; i!=n; i++)
	{
		profit= coreMoney*0.9/100;
		coreMoney+=profit;
	}
	printf("So tien nguoi gui tiet kiem duoc trong %d nam la: %lf",n,coreMoney);
}
