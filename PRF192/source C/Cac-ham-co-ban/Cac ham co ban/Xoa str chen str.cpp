#include<stdio.h>
#include <string.h>


void strInsert(char *s,char *s1, int vt)
{
	char b[100];
	strcpy(b,s+vt);
	s[vt]='\0'; 
	strcat(s,s1);
	strcat(s,b); 
}
void delString(char *s1, char *s2,char *s3)
{
	char *s = 0;
    s = strstr(s1,s2);
    int i = s - s1;
    strcpy(s1+i,s1+i+strlen(s2));	
    strInsert(s1,s3,i);
}
int main() 
{
	char s1[100] = "thang hue thang hue tha";
	char s2[50] = "thang";
	char s3[50] ="hue";
	while(strstr(s1,s2) != NULL)
		delString(s1,s2,s3);
	printf("%s\n",s1);
}
