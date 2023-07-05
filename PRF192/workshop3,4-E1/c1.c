#include <stdio.h>

int dayOfMonth(int month, int year) {
	switch(month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: 
			return 31;
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
		case 2: 
			return ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))?29:28;
		default: 
			return -1;	
	}
}

void afterDay(int day, int month, int year) {
	int dom = dayOfMonth(month, year);
	if(day == dom) {
		if(month == 12) {
			day = 1;
			month = 1;
			year++;
		} else {
			day = 1;
			month++;
		}
	} else {
		day++;
	}
	printf("\nDay after %d %d %d", day, month, year);
}


int main() {
	int day, month, year;
	do{
		printf("day/month/year: ");
		scanf("%d%d%d", &day, &month, &year);
	} while(day < 1 || day > 31 || month < 1 || month > 12 || year < 1);
	
	afterDay(day, month, year);
	return 0;
}