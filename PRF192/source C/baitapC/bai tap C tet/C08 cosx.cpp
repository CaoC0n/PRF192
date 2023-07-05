#include<stdio.h>
#include<math.h>

int main()
{
	float c=0.0001,s=1,x;
	printf("Nhap so thuc x: ");
	scanf("%f",&x);
	
	float temp=x;
	for(int i=2; temp>=c ;i++)
	{	
		temp*=x/i;
		if(i%2==0);		
			s+=temp*pow(-1,i/2);
	}
	printf("cos^x = %f",s);	
	printf("\n%f",cos(x));
}
