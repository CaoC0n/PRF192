#include<stdio.h>

int main()
{
	float math, chem, phy;
	printf("Enter math mark: ");
	scanf("%f", &math);
	printf("Enter chem mark: ");
	scanf("%f", &chem);
	printf("Enter phy mark: ");
	scanf("%f", &phy);
	printf("Tong diem 3 mon: %f", math+chem+phy);
	if(math < 65 || phy < 55 || chem < 50 || math + chem + phy < 140)
		printf("\nThe candidate is not eligible for admission.\n");
	else
		printf("\nThe candidate is eligible for admission.");
}
