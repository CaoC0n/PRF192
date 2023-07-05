#include <stdio.h>

int main() {
	char ch; 
	scanf("%c", &ch);
	
	if ((ch >= 'a') && (ch <= 'z') || (ch >= 'A') && (ch <= 'Z')) {
		printf("character is alphabet\n");
	} else {
		printf("character is not alphabet\n");
	}
	return 0;
}