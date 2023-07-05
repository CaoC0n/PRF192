#include<stdio.h>
#include<math.h>

int main()
{
	int n,a,max,i;
	printf("nhap n = ");
	scanf("%d",&n);
	max=0;
	//max = INT_MIN
	for(i=1;i<=n;i++)
	{
		printf("nhap so thu %d la: ",i);
		scanf("%d", &a);
		if(a>max) max=a;
	}
	printf("so lon nhat trong day la %d ",max);
}
