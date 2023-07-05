#include <stdio.h>

int main() {
	float a, b, c;
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	
	if(a + b + c == 180) {
		printf("It is a Valid Triangle\n");  
    } else {  
        printf("It is an invalid Triangle");  
    }  
	return 0;
}