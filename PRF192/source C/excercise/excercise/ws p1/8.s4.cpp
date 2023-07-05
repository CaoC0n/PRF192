#include<stdio.h>
#include<math.h>

int main()
{
	int n;
	float sum = 1;
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)	
		sum = sum + pow((double)(-1),i)* (1.0/(2*i+1));
	printf("%.2f",sum);
}
