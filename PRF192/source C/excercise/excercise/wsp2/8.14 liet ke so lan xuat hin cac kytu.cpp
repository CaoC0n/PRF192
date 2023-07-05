#include<stdio.h>
#include<string.h>

int countChar(char *s,char c)
{
	int i,sum = 0;
	for (i = 0; i < strlen(s); i++)
		if (s[i] == c)  
		{
			sum++;
			if (sum >= 2) 
			{
				strcpy(s+i,s+i+1);
				i--;
			}
		}
	return sum;
}
//int countChar(char *a,char *dem)            // dem so lan xuat hien cac ky tu luu vao ham dem
//{
//	int i,j;
//	for (i=0; i< strlen(a); i++)
//		dem[i]=1;
//	for (i=0; i< strlen(a); i++)
//		for (j=i+1; j< strlen(a); j++)
//			if (a[i]==a[j])
//			{
//				dem[i]++;
//				strcpy(a+j,a+j+1);
//				j--;
//			}
//}
main()
{
	char a[101]="aaaaaa";
	int i;
	int b[100];
	for (i = 0; i < strlen(a); i++)
	{
		b[i] = countChar(a,a[i]);
		printf("Ky tu %c xuat hien %d lan.\n",a[i], b[i]);		
	}
}




