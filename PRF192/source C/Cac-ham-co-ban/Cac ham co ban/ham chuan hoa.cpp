#include<stdio.h>
#include<string.h>
void DelChar(char s[],int k)
{
	int i;
	for (i=k;i<strlen(s); i++)
	{
		s[i]=s[i+1];
	}
	
}
void normalize(char s[])
{
	int i;
	for(i=0;i<(int)strlen(s)-1;i++)
	{
		if(s[i]==' '&&s[i+1]==' ')
		{
			DelChar(s,i+1);
			i--;	
		}
	}
	if(s[0]==' ') DelChar(s,0);
	if(strlen(s)>0&&s[strlen(s)-1]==' ') DelChar(s,strlen(s)-1);
}
int main()
{
	char s[101];
	gets(s);
	int i,count=0;
	normalize(s);
	printf("|%s|\n",s);
//	for(i=0;i<strlen(s);i++)
//		if(s[i]==' ') count++;
//	if(strlen(s)==0)	printf("So tu: 0");
//	else
//		printf("So tu %d",count+1); int argc,char*argv
	
}
