#include<stdio.h>
#include<limits.h>

int main()
{
	int a[1000];
	int n,s1=0,s2=0;
	printf("Day so gom: ");
	scanf("%d",&n);
	
	for(int i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0) s1++;
		else s2++;
	}
	printf("Day co %d so chan va %d so le",s1,s2);
}
