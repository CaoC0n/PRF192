#include<stdio.h>
#include<string.h>

int main()
{
	char S[1000];
	gets(S);
	int n= strlen(S);
	int right=0;

	for(int i=0; i<n; i++)
		if(S[i] != S[n-1-i])
			right=1;
	if(right==1) printf("Day khong phai doi xung");
	else printf("Day doi xung");
}
