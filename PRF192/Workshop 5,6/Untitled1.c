#include <stdio.h>
#define MAXN 100


char getChoice() {
	printf("1- Add a value\n");
	printf("2- Search a value\n");
	printf("3- Print out the array \n");
	printf("4- Print out the array in rages\n");
	printf("Other - Quit\n\n");
	printf("Choose 1 to 4 options: ");
	fflush(stdin);
	char c = getchar();
	return c;
}


void show(float *a, int *n) {
	int i;
	for (i =0 ; i < (*n); i++)
		printf("%-10f", a[i]);
	printf("\n");
}


int isFull(float *a, int *n) {
	return ((*n) == MAXN);
}


int isEmpty(float *a, int *n) {
	return ((*n) == 0);
}


void add(float x, float *a, int *n) {
	a[*n] = x;
	(*n)++;
}


int search(float x, float * a, int *n) {
	int i;
	for (i = 0; i < (*n); i++) {
		if (a[i] == x) {
			printf("Value at: arr[%d]", i);
		}
	}
	return i;
}


void inRangeMinMax(float *a, int *n){
	float minVal, maxVal; 
	int i;
	printf("minVal = ");
	scanf("%f", &minVal);
	printf("maxVal = ");
	scanf("%f", &maxVal);
	while (minVal > maxVal) {
		printf("Please enter again MIN and MAX value!\n");
		printf("minVal = ");
		scanf("%f", &minVal);
		printf("maxVal = ");
		scanf("%f", &maxVal);
	}
	for (i = 0; i < (*n); i++){
		if (a[i] >= minVal && a[i] <= maxVal) {
			printf("%-5.4f <= %-5.4f <= %-10.4f\n", minVal, a[i], maxVal);
		} else {
			printf("No value in range!\n");
			break;
		}
	}
	printf("\n");
}


int main(){
	char choose;
	int n = 0;
	float value;
	float a[100]; 
	do {
		choose = getChoice();
		switch (choose) {
			case '1':
				if (isFull(a, &n)) {
					printf("Array is full\n\n");
				} else {
						printf("Enter value: ");
						scanf("%*c%f", &value);
						add(value, a, &n);
						printf("Value is added to array\n\n");
					}
				break;
			case '2':
				if (isEmpty(a, &n)) {
					printf("Array is empty\n\n");
				} else {
					printf("Enter value to search: ");
					scanf("%*c%f", &value);
					search(value, a, &n);
					printf("\n\n");
				}
				break;
			case '3':
				if (isEmpty(a, &n)) {
					printf("Array is empty\n\n");
				} else {
					show(a, &n);
				} 
				break;
			case '4':
				if (isEmpty(a, &n)) {
					printf("Array is empty\n\n");
				} else {
					inRangeMinMax(a, &n);
				} 
				break;
			default: 
				printf("INVALID VALUE!");
		}
	} while (choose >= '1' && choose <='4');
	return 0;
}