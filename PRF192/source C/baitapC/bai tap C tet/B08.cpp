#include<stdio.h>
#include<math.h>

int main()
{
	int n,s=1;
	scanf("%d",&n);
	
	for(int i=n; i>0; i-=2)
		s*=i;
	printf("n!! = %d",s);
}
