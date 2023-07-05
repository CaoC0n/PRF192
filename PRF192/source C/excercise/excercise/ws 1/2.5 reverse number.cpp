#include<stdio.h>

int main()
{
	int a,i=1;
	printf("Input a number: ");
	scanf("%d",&a);
	printf("The number in reverse order is : ");
	
	while(a!=0)
	{
		printf("%d",a%10);
		a = a/10;
		i++;
	}
}
