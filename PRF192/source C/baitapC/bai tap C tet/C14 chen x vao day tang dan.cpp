#include<stdio.h>

int main()
{
	float a[1000],n,x;
	printf("Nhap n: ");
	scanf("%f",&n);
	printf("Nhap x: ");
	scanf("%f",&x);	
	printf("Nhap day n so:\n");
	for (int i = 0; i < n; i++)
		scanf("%f",&a[i+1]);	
	a[0]=x;
	for (int i = 0; i <= n; i++)
	{	
		float min = a[i];
		for(int j = i+1; j <= n; j++)
			if(a[j] < min)
			{
				min  = a[j];
				a[j] = a[i];
				a[i] = min;
			}
		printf("%f ",a[i]);	
	}
}
