#include<stdio.h>
#include<math.h>

int main()
{
	int n,sum = 0;
	scanf("%d",&n);
	for(int i=2;i<=n;i++)
		if(i%3==1) sum = sum + 1;
	printf("%d",sum);
}
