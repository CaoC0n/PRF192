#include<stdio.h>

void sx( char a[], int *n) 
{
	int i,j;
	for(i=0; i< *n; i++)
	{	
		for(j=i+1; j< *n; j++)
			if(a[j] <= 'z' && a[j] >= 'a' && a[j]<a[i])// so sanh cac so
			{// doi vi tri
				int tg=a[j];
				a[j]=a[i];
				a[i]=tg;
			}
	}
}
int main()
{
	char a[50] = "faBbcdA";
	int i,n = 7; 
	sx(a,&n);
	
	for(i=0; i<n; i++)
		printf("%c",a[i]);
}
