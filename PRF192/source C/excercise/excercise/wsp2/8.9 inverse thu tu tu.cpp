#include<stdio.h>
#include<string.h>

void reverse(char *s,char *c)
{
	c[0]='\0';
	int i;
	for ( i= (int)strlen(s)-1;i>=0;i--)	
		{
			strcat(c,s+i+1);
			s[i]='\0';
		}
	strcat(c,s);
}
main()
{
	char s[200];
	scanf("%[^\n]",s);
	char s1[100];
	reverse(s,s1);
	printf("%s",s1);
}
