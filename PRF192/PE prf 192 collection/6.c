#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char s[100];
	gets(s);
	int count = 0;
	int i; 
	if (s[strlen(s)-1] == 'a' && s[strlen(s)-2] == 'l') {
		count++;
	}
	for (i = 0; i < strlen(s); i++) {
		if (s[i] == 'l' && s[i+1] == 'a' && s[i+2] == ' ') {
			count++;
		}
	}
	puts("\nOUTPUT:");
	printf("%d", count);
}
