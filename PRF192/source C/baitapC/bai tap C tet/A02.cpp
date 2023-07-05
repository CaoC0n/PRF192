#include<stdio.h>

int main()
{
	int n,s=0,s1=0,s2=0;
	printf("Nhap so tu nhien n: ");
	scanf("%d",&n);
	
	int i=1;
	while(s<=n)
	{	
		s+=i;
		if(i%2==0) s2+=i;
		else s1+=i;
		i++;
	}
	printf("Tong cac so tu nhien khong lon hon n la: %d\n",s);
	printf("Tong cac so tu nhien le khong lon hon n la: %d\n",s1);
	printf("Tong cac so tu nhien chan khong lon hon n la: %d\n",s2);
}
