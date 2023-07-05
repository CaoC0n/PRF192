#include<stdio.h>
#include<string.h>
#include<ctype.h> // xet 1 ky tu

main()
{
	char a[101];
	int i,lower=0, upper=0, digit=0;
	printf("Nhap chuoi: ");
	scanf("%[^\n]",a);

	for (i=0; i < strlen(a); i++)
		if(a[i] >= 'a' && a[i] <= 'z') lower++;    //if(islower(s[i]))
		else if (a[i] >= 'A' && a[i] <= 'Z') upper++;
		else if (a[i] >= '0' && a[i] <= '9') digit++;
	printf("%d chu hoa, %d chu thuong, %d chu so",upper, lower, digit);		
}
