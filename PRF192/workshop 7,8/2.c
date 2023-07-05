#include <stdio.h>
#include <string.h>


int main() {
	char s[50];
	scanf("%[^\n]s", s);
	char temp;
	int i, j;
	int len = strlen(s);
	for(i = 0; i < len-1; i++) {
		for( j = i+1; j < len; j++) {
			if(s[i] > s[j]) {
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}	
	puts("\nOUTPUT:");
	printf("%s", s);
	return 0;
}
