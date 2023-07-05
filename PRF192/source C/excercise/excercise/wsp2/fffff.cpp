#include <stdio.h>
#include<string.h>
#include<ctype.h>
 main()
{
char s[100] ;
gets(s);
int i;
	for (i=0; i < strlen(s); i++) 
	{
		if (islower(s[i]))
			s[i] = toupper(s[i]);		
	}
printf("%s",s);
}
