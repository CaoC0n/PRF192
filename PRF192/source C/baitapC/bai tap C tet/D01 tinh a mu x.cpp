#include<stdio.h>
#include<math.h>

double emu(float x, float c)
{
	double k=1,s=1;
	for(int i=1; k>=c; i++)
	{
		k*=x/i;
		s+=k;
	}	
	return s;
}

int main()
{
	float a,x;
	scanf("%f",&a);
	scanf("%f",&x);
	
	printf("Tinh a^x = %lf", emu(x*log(a),0.000001));
	
}
