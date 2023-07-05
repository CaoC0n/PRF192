#include<stdio.h>

int S(int n)
{
	int f=2*n-1;
	if(n==0) return 1;
	return f+S(n-1);
}

int main()
{
	int n,i; 
	while(n!=0)
	{
		printf("Enter positive integer(0 to quit): ");
		scanf("%d",&n);
		if(n<0) printf("Incorrect input!");
		else printf("1+...+S(%d) = %d\n",n,S(n));
		i++;
	}
}
