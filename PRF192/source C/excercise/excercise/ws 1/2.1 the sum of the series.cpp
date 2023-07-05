#include<stdio.h>
#include<math.h>

int main()
{
	int a[1000],n;
	scanf("%d",&n);

		
	for(int i=0; i<n; i++)
		scanf("%d",&a[i]); 
		int sum = 0;
	for(int i=0; i<n ;i++)
	{		
	 if (a[i]%2 == 0) 
	 sum+= a[i];
	}	
	if (sum == 0 ) printf("even numbers do not exist");
	else printf("%d",sum);
}
