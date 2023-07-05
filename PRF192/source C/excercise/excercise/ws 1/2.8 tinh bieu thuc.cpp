#include<stdio.h>
#include<math.h>

int factor(int n)
{	
	int u=1;
	for(int i=1; i<=n; i++)
		u*=i;
	return u;
}
int main()
{	
	float x,n,s8=1,s9=1,s10=1;
	scanf("%f%f",&x,&n);	
	for(int i=1; i<=n; i++)
	{
		s8+= (i*x)/factor(i);
		s9+= pow(x,i)/factor(i);
		s10+= pow(-1,i)*pow(x,i)/factor(i);
	}	
	printf("S8 = %f\nS9 = %f\nS10 = %f\n",s8,s9,s10);
}
