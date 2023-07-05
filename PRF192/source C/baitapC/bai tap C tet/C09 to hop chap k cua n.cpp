#include<stdio.h>

//int factor(int n)
//{
//	int s=1;
//	for(int i=1; i<=n; i++)
//		s*=i;
//	return s;
//}

int nCk(int n, int k)
{
	if(k==0|| k==n) return 1;
	return nCk(n-1,k-1) + nCk(n-1,k);
}

int main()
{
	int n,k;
	printf("Nhap so tu nhien n va k: ");
	scanf("%d%d",&n,&k);
	
//	int C=factor(n)/(factor(k)*factor(n-k));
	int C= nCk(n,k);
	printf("To hop chap k cua n la: %d",C);
}
