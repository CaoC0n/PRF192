#include <stdio.h>

int main() {
	int cP, sP;
	printf("Input cost price: ");
	scanf("%d", &cP);
	printf("Input selling price: ");
	scanf("%d", &sP);
	
	int profit = sP - cP;
	int loss = cP - sP;
	
	if(cP > sP) {
		printf("\nLoss profit: %d", loss);
	} else {
		printf("\nProfit: %d", profit);
	}
	return 0;
}