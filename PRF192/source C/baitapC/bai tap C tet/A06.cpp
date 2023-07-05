#include<stdio.h>

int main()
{
	int n,sum=0;
	printf("Nhap so tu nhien n: ");
	scanf("%d",&n);
	
	for(int i=1; i<=n; i++)
		if(i%3==1) sum++;
	
	printf("So cac so tu nhien khong lon hon n va chia cho 3 du 1 la: %d",sum);
}
