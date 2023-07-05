#include <stdio.h>
#include <string.h>

int main() {
	char s[100];
	gets(s);
	int i;
	for (i = 0; i < strlen(s); i++) {
		if (isupper(s[i])) {
			s[i] += 32;
	} if (s[i] != 'a' || s[i] != 'e' || s[i] != 'i' || s[i] != 'o' || s[i] != 'u') {
			s[i] -= 32;
		}
	}
	puts("\nOUTPUT:");
	printf("%s", s);
}
