#include<stdio.h>

int ucln(int a, int b)
{
	for (int i=a; i>=1; i--)
		if(a%i==0 && b%i==0)
	return i;
}
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int bcnn(int a,int b)
{
	int x= a*b/ucln(a,b);
	return x;
}

int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	
	printf("Uoc chung lon nhat cua 2 so la: %d\n",ucln(a,b));
	printf("Boi chung nho nhat cua 2 so la: %d",bcnn(a,b));
}
