#include <stdio.h>
#include <string.h>


int main() {
	char s[100];
	gets(s);
	char c;
	scanf("%c", &c);
	
	int flag = 0;
	
	puts("\nOUTPUT:");
	for(int i = 0; s[i] != '\0'; i++) {
		if(s[i] == c) {
			printf("%d ", i);
			flag = 1;
		}
	}
	if(flag == 0) {
		printf("%c not exist", c);
	}
	return 0;
}
