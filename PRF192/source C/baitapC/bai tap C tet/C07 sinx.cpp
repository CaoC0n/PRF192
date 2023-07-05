#include<stdio.h>
#include<math.h>

int main()
{
	float c=0.0001,s=0,x;
	printf("Nhap so thuc x: ");
	scanf("%f",&x);
	
	float temp=1;
	for(int i=1; temp>=c ;i++)
	{	
		temp*=x/i;
		if(i%2==0);		
		else
			s+=temp*pow(-1,(i-1)/2);
	}
	printf("sin^x = %f",s);	
	printf("\n%f",sin(x));
}
