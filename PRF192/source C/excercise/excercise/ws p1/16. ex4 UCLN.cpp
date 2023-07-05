#include<stdio.h>

int ucln(int a,int b){
	int x;
	while(b!=0)
	{
		x=a%b;
		a=b;
		b=x;
	}
	return a;
}
void fact(){
	int a,b;
	printf("1. Input \n");
	printf("Enter n1: ");
	scanf("%d",&a);
	printf("Enter n2: ");
	scanf("%d",&b);
	while(1)
	{
		if (b != 0 ) break;
		printf("Enter n2: ");
		scanf("%d",&b);		
	}
	int r = ucln(a,b);
	a = a/r;
	b = b/r;
	printf("2. Simplify frac: %d / %d",a,b);
}
int main()
{
	fact();
	fflush(stdin);
	char c;
	while (1){
		printf(" \n Another run (y/n) ? ");
		fflush(stdin);
		scanf("%c",&c);
		fflush(stdin);
		if (c == 'y')
			fact();
		else if (c =='n')
			break;
	}
	
		
}
