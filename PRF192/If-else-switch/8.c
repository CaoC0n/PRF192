#include <stdio.h>

int main() {
	char ch;
	scanf("%c", &ch);
	
	if (ch >= 'A' && ch <= 'Z') {
		printf("Character is uppercase alphabe\n");
	} else if(ch >= 'a' && ch <= 'z') {
		printf("Character is lowercase alphabet\n");
	} else {
		printf("Not value");
	}
	return 0;
}