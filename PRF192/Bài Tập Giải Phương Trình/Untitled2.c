#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int s = 0;
	while(s < 10000) {
		n++;
		s += n;
	}
	printf("%d", n);
}