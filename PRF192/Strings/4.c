#include <stdio.h>
#include <string.h>


int main() {
	char s[100];
	scanf("%99[^\n]", s);
	int len = strlen(s);
	printf("%d", len);
	return 0;
}
