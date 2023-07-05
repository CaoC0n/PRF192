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
	int f1=1,f2=1,f3,n;
	printf("Nhap so nguyen duong n: ");
	scanf("%d",&n);
	
	if(n==1 || n==2)  printf("So Fibonacci Fn la: %d",f1);
	else
	{
		int i=3;
		while(i<=n)
		{
			f3=f2+f1;
			f1=f2;
			f2=f3;
			i++;
		} 
//	else 
//	{
//		for(int i=3; i<=n ;i++)
//		{
//			f3=f2+f1;
//			f1=f2;
//			f2=f3;		
//		}
		printf("So Fibonacci Fn la: %d",f3);
	}
}
