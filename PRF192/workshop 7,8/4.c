#include <stdio.h>
#include <string.h>

int main() {
	char s[100];
	scanf("%[^\n]s", s);
	int count = 0;
	for (int i = 0; s[i] != '\0'; i++){
		if (s[i] == 'e' || s[i] == 'u' || s[i] == 'o' || s[i] == 'a' || s[i] == 'i'
		    || s[i] == 'E' || s[i] == 'U' || s[i] == 'O' || s[i] == 'A' || s[i] == 'I') {
			count++;
		}
	}
	puts("\nOUTPUT: ");
	printf("%d", count);
	return 0;
}
