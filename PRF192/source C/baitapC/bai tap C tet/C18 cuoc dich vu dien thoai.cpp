#include<stdio.h>

int main()
{
	printf("Thoi gian goi dien la:\nGio: ");
	int hour,minute;
	scanf("%d",&hour);
	printf("Phut: ");
	scanf("%d",minute);
	
	printf("Cuoc dich vu dien thoai la: %d dong",60*hour+minute*500);
}
