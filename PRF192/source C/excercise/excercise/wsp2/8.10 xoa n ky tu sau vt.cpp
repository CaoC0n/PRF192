#include<stdio.h>
#include<string.h>

main()
{
	char a[101]="happy new year";
	int i,vt=0,n=5;
//	printf("Nhap chuoi: ");
//	scanf("%[^\n]",a);

	strcpy(a+vt,a+vt+n);	
		
	printf("%s",a);		
}

