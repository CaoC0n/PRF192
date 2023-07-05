#include<stdio.h>
#include<math.h>

int fac(int n){
	int S=1;
	for(int i=1;i<=n;i++)
		S = S*i;
	return S;
}

int main()
{
	int n,S = 1;
	scanf("%d",&n);
//	for(int i=1;i<=n;i++)
//		S = S*i;
	S = fac(n);
	printf("%d",S);
}
