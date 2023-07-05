#include<stdio.h>
#include<math.h>

void Cal(int x, int n ,int *s, int *s1, float *s2)
{
	*s=1,*s1=1,*s2=1;
	int temp=1;
	for (int i=1; i<=n; i++)
	{
		*s+=pow(x,i);
		*s1+= pow(x,i)*pow(-1,i);
		temp*=x/i;
		*s2+=temp;
	}
}
int main()
{
	int x,n;
	printf("Nhap so nguyen duong x va n: ");
	scanf("%d%d",&x,&n);
	int s,s1;
	float s2;
	Cal(x,n, &s,&s1,&s2);
	printf("%d %d %f",s,s1,s2);	
}
