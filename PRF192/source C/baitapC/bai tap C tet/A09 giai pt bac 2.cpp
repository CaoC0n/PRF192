#include<stdio.h>
#include<math.h>

int main()
{
	float a,b,c;
	printf("Nhap 3 so thuc a,b,c: ");
	scanf("%f%f%f",&a,&b,&c);
	float delta = b*b-4*a*c;
	
	if(delta < 0) printf("Phuong trinh ax^2+bx+x=0 vo nghiem");
	else if(delta == 0) printf("Phuong trinh ax^2+bx+x=0 co nghiem kep x1=x2=%f",-b/2*a);
	else 
	{
		float x1= (-b + sqrt(delta))/(2*a);
		float x2= (-b - sqrt(delta))/(2*a);
		printf("Phuong trinh ax^2+bx+x=0 co nghiem\nx1=%f \nx2=%f",x1,x2);
	}
}
