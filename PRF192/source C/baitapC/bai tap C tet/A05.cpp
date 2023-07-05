#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Nhap vao 3 canh tam giac: ");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a+b>c || b+c>a || c+a>b)
		printf("Do la do dai 3 canh tam giac");
	else printf("Do khong phai la do dai 3 canh tam giac");
}
