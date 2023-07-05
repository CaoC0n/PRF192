#include<stdio.h>
#include<string.h>

int main()
{
//	int i, j;
//	char s[100];
//	gets(s);
//	for(i=0, j=strlen(s)-1; s[i]==s[j] && i < j; ++i, --j)
//		;
//	if(i>=j) printf("Day la palindrome");
//	else printf("Day khong phai la palindrome");

	char S[1000];
	gets(S);
	int n= strlen(S);
	int right=0;

	for(int i=0; i<n; i++)
		if(S[i] != S[n-1-i])
			right=1;
	if(right==1) printf("Day khong phai la palindrome");
	else printf("Day la palindrome");
}
