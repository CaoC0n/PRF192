#include<stdio.h>
#include<math.h>

int main()
{
	int x,y,z;
	for(x=1;x<=100;x++)
		for(y=1;y<=100;y++)
			for(z=0;z<=100;z+=3)
				if(x+y+z==100 && 5*x+3*y+z/3==100) 
					printf("trau dung: %d, trau nam: %d, trau gia: %d\n",x,y,z);

}
