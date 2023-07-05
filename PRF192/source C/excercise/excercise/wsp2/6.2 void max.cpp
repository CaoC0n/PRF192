#include<stdio.h>
#include<limits.h>

void Max(int *count, int *max)
{
	int n;
	*count = 0,*max=INT_MIN; 
	while (1)
	{
		scanf("%d",&n);
		if (n==0) break;
		if (n > *max) *max = n;
		(*count)++;
	}
}

main()
{
	int count, max;
	Max(&count, &max);
	printf("So so nguyen nhap vao là: %d\nSo lon nhat trong do la: %d", count, max);
}
