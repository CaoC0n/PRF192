#include<stdio.h>
#include<conio.h>

int main()
{
	char c;
	printf("Enter character: ");
	scanf("%c", &c);
	if(c == 65|| c == 97 || c == 69 || c== 101 || c == 73 || c == 105 || c == 79 || c == 111 || c == 85 || c == 117)
		printf("This is a vowel");
	else 
		printf("This is a consonant");
}
