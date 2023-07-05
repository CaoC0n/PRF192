#include<stdio.h>

int fun(int n) 
{
	int s,count=0;
	while(n!=0)
	{
		s=n%10;
		if(s%2!=0) count++; 
		n=n/10;
	}
	return count;
}

int main()
{
	int n;
	printf("Nhap so n: ");
	scanf("%d",&n);
	printf("So cac chu so le cua so n la: %d",fun(n));
}
