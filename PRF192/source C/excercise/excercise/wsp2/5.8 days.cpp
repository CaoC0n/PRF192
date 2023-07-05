#include<stdio.h>

int days(int i)
{
	if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
		return 31;
	else if (i==4||i==6||i==9||i==11)
		return 30;
	else if(i==2)
		return 28;
	else 
		return 0;	
}

int main()
{
	int month = 3;
	
	printf("So ngay cua thang %d nam 2021 la: %d ngay",month,days(month));
}
