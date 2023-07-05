#include <stdio.h>

int main() {
	int month;
	scanf("%d", &month);
	
	switch(month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("%d has 31 days", month);
			break;
		
		case 2:
			printf("%d has 28 days\nThis month has 29 days if leap year", month);
			break;
		
		case 4:
		case 6:
		case 9:
		case 11:
			printf("%d has 30 days", month);	
			break;	
		default:
			printf("Not value");	
	}
	return 0;
}