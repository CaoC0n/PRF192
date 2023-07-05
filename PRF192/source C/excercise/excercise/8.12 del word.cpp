#include<stdio.h>
#include<string.h>
void del(char s[], char c[],char a[])
{
	s[strlen(s)-strlen(c)]='\0';
	strcat(s,c+strlen(a)+1);
}
int main(int argc,char*argv)
{
	char s[101],a[101],*c;
	printf("Nhap chuoi\n");
	gets(s);
	printf("Nhap tu can xoa\n");
	gets(a);	
	printf("|%s|\n",a);
	while(1)
	{	
		c=strstr(s,a);
		if(c!=NULL) del(s,c,a); 		
		else break;	
	}
	printf("|%s|",a);

}
