#include <stdio.h>
#include <ctype.h>

int main() {
	char s[100] = "		BTP100   is not		that hard!";
	printf("%s[^\n]", s);
	
	char result = isspace(s);
	return 0;
}
