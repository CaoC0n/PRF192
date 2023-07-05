#include<stdio.h>
#include<string.h>

int main()
{
	char s[1000];
	gets(s);
	int sum=1;
	
	for(int i=0; i<=strlen(s); i++)
		if(s[i]== ' ')
			sum++;
	printf("Day gom %d chu",sum);
	
}
