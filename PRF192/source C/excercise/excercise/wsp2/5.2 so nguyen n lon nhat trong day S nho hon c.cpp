#include<stdio.h>

int find(int c)
{	
	int sum =0,i;	
	for(i=0; sum<=c; i++)
		sum+=i;
	return i-2;
}	

int main()
{
	int c;
	while(1)
	{
		printf("\nEnter c: ");
		scanf("%d",&c);
		if(c==0) break;
		printf("%d ",find(c));	
	}
}
