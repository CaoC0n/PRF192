#include<stdio.h>
#include<math.h>
#include <ctype.h>
#include<string.h>
int main()
{
	char a[100];
	int count=0,phuam=0;		
	
	gets(a);
	int nVowels = 0, nConsonants = 0, nOthers = 0;
	
	char ch = 0;
	int i = 0;
	for (i=0; i < strlen(a); i++)
	{
		a[i] = toupper(a[i]);
		if( a[i] >= 'A' && a[i] <= 'Z')
		{	
			if (a[i] == 'U'|| a[i] == 'E'|| a[i] == 'O'||a[i] == 'A'|| a[i] == 'I')
				nVowels++;
			else 		
				nConsonants++;
		}
		else nOthers++;
	}
				
	printf("%d", nVowels);
	printf("%d", nConsonants);
	printf("%d", nOthers);
	
}
