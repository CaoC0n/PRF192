#include<stdio.h>

int main()
{
	int n,sum=0;
	printf("Nhap so tu nhien n: ");
	scanf("%d",&n);
	
	for(int i=1; i<=n; i++)
		if(i%7!=0) sum+=i;
	
	printf("tong cac so tu nhien khong lon hon n va khong chia het cho 7 la: %d",sum);
}
