#include<stdio.h>

int S(int n)
{
//	int f=2*n-1;
//	if(n==0) return 1;
//	return f+S(n-1);
	int s=1;
	for (int i=1; i<=n;i++)
	{
		int f=2*i-1;
		s+=f;
	}
	return s;
}

int main()
{
	int n,i; 
	while(n!=0)
	{
		printf("Enter positive integer(0 to quit): ");
		scanf("%d",&n);
		if(n<0) printf("Incorrect input!\n");
		else if(n==0) break;
		else printf("1+...+S(%d) = %d\n",n,S(n));
		i++;
	}
}
