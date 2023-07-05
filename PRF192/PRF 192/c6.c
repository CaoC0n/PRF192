#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char s[100];
	fgets(s, sizeof(s), stdin);
	
	for(int i = 0; s[i] != '\0'; i++) {
        	if (s[i] >= 'a' && s[i] <= 'z'){
            		if(i % 2 != 0)
						s[i] -= 32;	
				}
		}
	puts(s);
}