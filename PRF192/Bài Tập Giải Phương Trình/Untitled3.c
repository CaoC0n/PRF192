#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int m = 0;
	
	int sum = 0;
	while(sum < n) {
		m++;
		sum += m;
	}
	printf("%d", m-1);
}