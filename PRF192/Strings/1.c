#include <stdio.h>
#include <string.h>


int main() {
	char s[100];
	scanf("%99[^\n]", s);
	puts("OUTPUT:");
	printf("%s", s);
	return 0;
}
