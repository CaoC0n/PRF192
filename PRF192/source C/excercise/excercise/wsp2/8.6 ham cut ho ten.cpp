#include<stdio.h>
#include<string.h>
//void cut(char *s, char* ho, char *ten) 
//{
//	ten[0]='\0',ho[0]='\0';
//	int i,j;
//	for (i = (int)strlen(s) - 2; i >= 0; i--)
//		if (s[i]== ' ' && s[i+1] != ' ')	break;		
//	strcat(ten,s+i+1);
//	s[i]='\0';
//	strcat(ho,s);
//}
//
int findLastSpace(char *s)// tim index dau cach co nghia cuoi cung
{
	int i;
	for ( i= (int)strlen(s)-2; i>=0 ;i--)
		if (s[i]== ' ' && s[i+1] != ' ')
			return i;
	return i;
}
void cut(char *s, char *ho, char *ten)
{
	int index = findLastSpace(s);
	if (index == -2 || (index == -1 && s[0] == ' '))
	{
		strcpy(ho, "");
	//	ten[0] = '\0';// dong nay va dong trne tuong duong
		return;
	}
	strcpy(ten,s+index+1);
	strcpy(ho, s);
	if (index == -1)  ho[0] = '\0';
	else ho[index] = '\0'; 
}

main()
{
	char s[200]=" le tung   ";
	char ho[100], ten[100];
	cut(s,ho,ten);
	printf("%s\nho: |%s|\nten: |%s|",s,ho,ten);
}
