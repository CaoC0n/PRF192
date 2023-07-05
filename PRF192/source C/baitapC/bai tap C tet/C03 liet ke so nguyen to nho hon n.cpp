#include<stdio.h>
#include<math.h>

int main()
{
	int n;
	scanf("%d",&n);
	
	if(n==1 || n==2) printf("khong co so nguyen to nho hon n");	
	for(int i=2; i<n; i++)
		if(i==2) printf("%d",i);
		else
		{
			int check;
			for(int j=2; j<i; j++)
				if(i%j==0) 
				{
					check=1;
					break;
				}
				else check=0;
			if(check==0) printf("%3d",i);
		}	
}
