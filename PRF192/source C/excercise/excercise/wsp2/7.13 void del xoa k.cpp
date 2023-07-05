#include<stdio.h>

void del(int a[], int *n, int k)
{
	int i;
	for (i = k; i < *n - 1; i++)
		a[i] = a[i+1];
	(*n)--;		
}

int main()
{
	int a[1000] = {1, 2, 3, 3, 5, 6};
	int n = 6,i,j;
//	int k;
//	printf("Nhap so nguyen n,k: ");
//	scanf("%d%d",&n,&k);
	for (i=0; i< n; i++)
		for (j=i+1; j< n; j++)
			if (a[i]==a[j])
			{
				del(a,&n,j);
				j--;
			}
	for (i = 0; i < n; i++)
		printf("%4d ",a[i]);

}

