#include<stdio.h>
#include<math.h>

int main()
{
	float c=0.0001,s=1;
	
	for(int i=1; i<= (1/c-1)/2 ; i++)
		s+=pow(-1,i)/(2*i+1);
	printf("So Pi = %f", 4*s);	
}
