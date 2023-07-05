#include<stdio.h>
#include<math.h>

int main()
{
	int x;
	scanf("%d",&x);
	int a[1000];
		
	int i=0,j=0;
	while(x!=0)
	{
		a[i]=x%11;
		x=x/11;
		i++;j++;
	}
	for (i = j-1; i>=0; i--)
	{
		if (a[i]==10) printf("A");
		else
			printf("%d",a[i]);
	}
}
