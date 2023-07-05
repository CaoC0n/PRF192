#include<stdio.h>
swap(int &a, int &b){
	int temp;
	temp=a;
	a=b;
	b=temp;
}
void increase(int n, int a[]){
	for(int i=0; i<n; i++)
		for(int j=i+1; j<n; j++)
			if(a[i]>a[j])
				swap(a[i],a[j]);
}
void del(int a[], int *n, int k)
{
	for (int i = k; i < *n - 1; i++)
		a[i] = a[i+1];
	(*n)--;		
}
int main()
{
	int a[1000],n;
	scanf("%d",&n);
	int i;
	for(i=0; i<n; i++)
		scanf("%d",&a[i]);
	int j;
	for (j=0; j< n; j++)
	
			if (a[j] %2 == 0)
			{
				del(a,&n,j);
				j--;
			}
//	for (int i = n-1; i >= 1; i--)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			if (a[j] > a[j+1]){
//				int temp = a[j];
//				a[j] = a[j+1];
//				a[j+1] = temp;
//			}
//		}
//	}
	increase(n,a);
	for(int i=0; i<n; i++)
		printf("%d\n",a[i]);	
}
