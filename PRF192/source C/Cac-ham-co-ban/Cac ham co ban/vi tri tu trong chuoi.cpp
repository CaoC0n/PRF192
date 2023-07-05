#include<stdio.h>
#include <string.h>

//int Find(char s1, char s2)
//{
//	for ( int i = 0; i < strlen(s1) ; i++)
//	{
//		char s = strcpy(s1+ s2,s1)
//		if (strcmp(s2) )
//	}
//}
int main() 
{
	char s1[100] = "hoehoehoa";
	char s2[50] = "hoa";
	char *s;
    s = strstr(s1,s2);
	int i = s - s1;
	printf("%d", i);

}
