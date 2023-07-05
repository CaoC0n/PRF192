#include<stdio.h>
#include<string.h>

void Normalize(char s[])
{
	int i;
	for (i=0; i< (int)strlen(s)-1; i++) 
		if (s[i] ==' ' && s[i+1]==' ')
		{
			strcpy(s+i+1,s+i+2);
			i--;
		}
	if (s[0] == ' ') strcpy(s,s+1);
	if (strlen(s) > 0 && s[strlen(s)-1]==' ')  s[strlen(s)-1]='\0';
}

main()
{
	char a[101];
	int i;
	printf("Nhap chuoi: ");
	scanf("%[^\n]",a);
	
	Normalize(a);
	for (i=0; i< strlen(a); i++)
		if (a[i-1]==' ' || i==0) a[i]-=32;
		
	printf("Chuoi output :|%s|",a);
}
