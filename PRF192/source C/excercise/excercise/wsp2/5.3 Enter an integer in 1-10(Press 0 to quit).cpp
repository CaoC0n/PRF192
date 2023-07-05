#include<stdio.h>

int main()
{
	int n,i,j=0,s=0;
	while(n!=0)
	{
		printf("Enter an integer in [1-10](Press 0 to quit): ");
		scanf("%d",&n);
		if(n<0 || n>10) printf("Incorect input, try again!\n");
		else 
		{	
			s+=n;
			j++;
		}
		i++;
	}
	printf("Number of integer entered: %d\nSum: %d",j-1,s);
}
