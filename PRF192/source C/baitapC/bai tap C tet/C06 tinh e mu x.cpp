#include<stdio.h>
#include<math.h>

/*int factorial(int n)
{
	int S=1;
	for( int i=1; i<=n; i++)
		S*=i;
	return S;
}*/

int main()
{
	float c=0.0001,s=1,x;
	printf("Nhap so thuc x: ");
	scanf("%f",&x);
	//cach1:
//	for(int i=1; fabs(pow(x,i)/factorial(i)) >=c ; i++)
//		s+=pow(x,i)/factorial(i);
	//cach2:
	float temp=x;
	for(int i=2; temp>=c ;i++)
	{
		s+=temp;
		temp*=x/i;
	}	
	printf("e^x = %f",s);	
}
