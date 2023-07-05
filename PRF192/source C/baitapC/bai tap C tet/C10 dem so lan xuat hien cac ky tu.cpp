#include<stdio.h>
#include<string.h>

int main()
{
	char s[1000];
	printf("Nhap day ky tu: ");
	gets(s);
	char kytu[100]= "ABCabc";
	int sum[100]={0};
	
	for(int i=0; i< strlen(s); i++)
	{
		for(int j=0; j< strlen(kytu);j++)
		{
			if(s[i]==kytu[j])
				sum[j]++;
		}	
	}
	for(int j=0; j< strlen(kytu);j++)
		printf("So lan xuat hien cua cac ky tu %c la %d\n",kytu[j],sum[j]);	
}
