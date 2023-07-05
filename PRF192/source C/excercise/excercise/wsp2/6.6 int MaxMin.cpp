#include<stdio.h>
#include<limits.h>

int MaxMin(int k, int *max, int *min)
{
	int n,count = 0;
	*max = INT_MIN, *min = INT_MAX; 
	while(1)
	{
		scanf("%d",&n);
		if(n > *max && n >= k) *max = n;
		if(n < *min && n >= k) *min = n;
		if(n == 0) break;
		count++;
	}
	return count;
}

main()
{
	int a,b,k=10;
	MaxMin(k,&a,&b);
	printf("%d %d",a,b);
}
