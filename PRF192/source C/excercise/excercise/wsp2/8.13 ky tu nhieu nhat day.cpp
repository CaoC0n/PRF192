#include<stdio.h>
#include<string.h>
void countChar(char *a,char *dem)
{
	int i,j;
	for (i=0; i< strlen(a); i++)
		dem[i]=1;
	for (i=0; i< strlen(a); i++)
		for (j=i+1; j< strlen(a); j++)
			if (a[i]==a[j])
			{
				dem[i]++;
				strcpy(a+j,a+j+1);
				j--;
			}
}

main()
{
	char a[101]="happy new year";
	char b[50];
	int i,c[50],x,j=0;
	int max=0;
	countChar(a,b);
	
	for (i=0; i< strlen(a); i++)
		if (b[i] > max && a[i] != ' ') 	max=b[i];	
		
	for (int i=0; i<strlen(b); i++)
		if (max == b[i] && a[i] != ' ') 
			printf("ky tu %c xuat hien nhieu nhat %d lan\n",a[i],max);
	
}


