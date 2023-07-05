#include<stdio.h>
#include<string.h>
void Delchar(char s[], int k)
{
	int i;		
	for (i= k; i < strlen(s); i++)
		s[i]=s[i+1];
}
main()
{
	char a[101],c='i';
	int i,k;
	printf("Nhap chuoi: ");
	scanf("%[^\n]",a);
	int n = strlen(a);
	for (i= 0; i < strlen(a); i++)
		if (a[i]==c) 
		{
			Delchar(a,i);
			i--;
		}
	printf("%s",a);	
}
