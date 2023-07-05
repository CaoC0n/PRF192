#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{	
	int n,x,y,S,sum = 0;
	scanf("%d",&n);
//	for(n=1;n<=1000;n++)
	{	
		S=n;
		x=S%10;
		for(int i=1;i<=x;i++)
			x = x*i;
		sum= sum + x;
		S=S/10;	
	}	
	printf("%d",sum);	
}
