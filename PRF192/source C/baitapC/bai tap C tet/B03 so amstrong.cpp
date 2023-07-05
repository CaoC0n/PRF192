#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c,s=0;
	for(int i=100; i<1000; i++)
	{
		c=i%10;
		a=i/100;
		b=(i-a*100)/10; // b=(i/10)%10;
		if(pow(a,3)+ pow(b,3)+ pow(c,3)==i)
		{
			printf("so Amstrong: %d\n",i);
			s++;
		}
	}
	printf("co %d so amstrong",s);
}
