#include<stdio.h>
#include<string.h>
#include <ctype.h>
main()
{
	char a[100],b[100];
	int i,count=0,phuam=0;
	printf("Nhap u[]: ");
	gets(a);
	printf("Nhap v[]: ");
	gets(b);
	for (i=0; i < strlen(a); i++)
		if(i == 0 || (a[i-1] ==' '&& a[i]!= ' ' ))
			a[i] = tolower(a[i]);
		else a[i] = toupper(a[i]);
		
	for (i=0; i < strlen(b); i++)
		if(b[i-1]!=' '&& b[i]== ' ')
			break;
		else 
			b[i] = toupper(b[i]);
	printf("Chuoi output u: %s",a);
	printf("\nChuoi output v: %s",b);			
}
