#include<stdio.h>
#include<string.h>

main()
{
	char s[101]="  sdnd262";
	int i,j=0;	
	int a[100];
	for (i=0; i < strlen(s); i++)
		if (s[i] >= '1'&& s[i] <= '9')
		{
			a[j]=s[i]-48;
			j++;
		}
	for (i=0; i < j; i++)
		printf("%d",a[i]);
}

