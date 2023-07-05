#include <stdio.h>
#include <string.h>

void string_reverse(char str[]) 
{
   int i, j, len;
   char ch; 
   j = len = strlen(str) - 1;
   i = 0;
   while(i < j) {
      ch = str[j];
      str[j] = str[i];
      str[i] = ch;
      i++;
      j--;
   }
}

int main () 
{
   char s1[100] = "Trinh ha";
   char reverse[100] = "";
   char temp[50];
   int i, j, n;
   n = strlen(s1);
 
	for(i = n-1; i >= 0; --i) 
	{
      	for(j = 0; i >= 0 && s1[i] != ' '; --i,++j)
        	temp[j] = s1[i];
      	temp[j] = '\0';
		string_reverse(temp);
    
      strcat(reverse, temp);
      strcat(reverse, " ");
   } 
   printf("Chuoi ban dau:\n %s", s1);
   printf("\nChuoi sau khi da duoc dao nguoc:\n %s",reverse);
}
//#include<stdio.h>
//#include<string.h>
//int findLastSpace(char *s)// tim index dau cach co nghia cuoi cung
//{
//	int i;
//	for ( i= (int)strlen(s)-2; i>=0 ;i--)
//		if (s[i]== ' ' && s[i+1] != ' ')
//			return i;
//	return i;
//}
//void cut(char *s, char *ho, char *ten)
//{
//	int index = findLastSpace(s);
//	if (index == -2 || (index == -1 && s[0] == ' '))
//	{
//		strcpy(ho, "");
//		ten[0] = '\0';// dong nay va dong trne tuong duong
//		return;
//	}
//	strcpy(ten,s+index+1);
//	strcpy(ho, s);
//	if (index == -1)  ho[0] = '\0';
//	else ho[index] = '\0'; 
//}
//void reverse(char *s, char *sn)
//{
//	char tg[100];
//	sn[0] ='\0'; // khoi gan rong cho xau sn
//	while(1)
//	{
//		if (s[0]== '\0') break;
//		cut(s,s,tg);
//		strcat(sn,tg);
//		strcat(sn," ");
//	}
//	if (strlen(sn) > 0)
//	
//}
//
//main()
//{
//	char s[200]="nguyen van tung";
//	char ho[100], ten[100];
//	cut(s,ho,ten);
//	printf("%s\nho: %s\nten: %s",s,ho,ten);
//}
