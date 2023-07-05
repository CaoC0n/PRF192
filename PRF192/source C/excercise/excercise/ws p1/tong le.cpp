#include<stdio.h>
#include<math.h>

int main()
{
	
	int n,sum = 0;
	scanf("%d",&n);
	if (n>=1 && n<=50)
	{
		for(int i=1;i<=2*n+1;i+=2)	
			sum = sum + i;	
			printf("%d",sum);
	}
	else printf("Nhap sai, nhap lai");
}
