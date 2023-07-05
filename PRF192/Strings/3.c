#include <stdio.h>
#include <string.h>


int main() {
	char s[100] = "fpt_university";
	printf("%s\n", s);
	int len = strlen(s);
	int k;
	scanf("%d", &k);
	for(int i = 0; i < len; i++) {
		if(i == k-1) {
			printf("%c", s[i]);
		}
	}
	return 0;
}
