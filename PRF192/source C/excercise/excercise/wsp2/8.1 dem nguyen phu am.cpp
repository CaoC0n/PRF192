#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
	char a[100];
	int i,count=0,phuam=0;		
	
	gets(a);
	for (i=0; i < strlen(a); i++)
		if(a[i] >= 'a' && a[i] <= 'z' || a[i] >= 'A' && a[i] <= 'Z')
		{
			if (a[i] == 'u'|| a[i] == 'e'|| a[i] == 'o'||a[i] == 'a'|| a[i] == 'i')
				a[i] = toupper(a[i]);
			else 		
				count++;
		}
		printf("%s",a);
	printf("so cac nguyen am la %d, so cac chu phu am la %d",count, phuam);		
}
