#include<stdio.h>
#include<math.h>

int main()
{
	printf("Tat ca cac to hop la: ");
	int s=0;
	for(int x=0; x<=12; x++)
	for(int y=0; y<=30; y++)
	for(int z=0; z<=120; z++)
		if(x*500+y*200+z*50==5750) 
		{
			printf("\n%d %d %d",x,y,z);
			s++;
		}	
	printf("\nCo %d to hop",s);
}
