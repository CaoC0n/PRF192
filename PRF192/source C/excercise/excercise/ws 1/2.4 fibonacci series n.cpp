#include<stdio.h>
double fibo ( int n) {
	int t1=1, t2=1, f=1, i;
   	for ( i=3; i<= n; i++) {
      f = t1 + t2;
      t1= t2;
      t2= f;
   }
   return f;
} 
int main()
{
	int f1=0,f2=1,f3,n;
	printf("Input number of terms to display : ");
	scanf("%d",&n);
	printf("Here is the Fibonacci series upto to %d terms :\n",n);
	
	for(int i=1; i<=n; i++)
	{
		printf("%d ",f1);
		f3=f2+f1;
		f1=f2;
		f2=f3;
	} 		
}
