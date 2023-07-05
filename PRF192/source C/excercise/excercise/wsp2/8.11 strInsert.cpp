#include<stdio.h>
#include<string.h>
void strInsert(char *s,char *s1, int vt)
{
	char b[100];
	strcpy(b,s+vt);
	s[vt]='\0'; 
	strcat(s,s1);
	strcat(s,b); 
}

main(){
//	char b[100]="hahaha hahaha ";
	char a[100]="abc123prf";
	char b[10]="-";
	int vt;
	for (vt=3; vt< strlen(a); vt+=4)
		strInsert(a,b,vt);
	printf("%s",a);
}
