#include<stdio.h>
#include<conio.h>

int main()
{
	char character;
	printf("Enter character: ");
	scanf("%c", &character);
	
	if((character>=32 && character <= 47) || (character>=91 && character <= 96) || character>=123 && character <= 126)
		printf("This is a special character");
	if(character>=48 && character <= 57)
		printf("This is a number");
	if(character>=58 && character <= 64)
		printf("This is operator");
	if((character>=65 && character <= 90) || (character >= 97 && character <=122))
		printf("This is an alphabet");
}
