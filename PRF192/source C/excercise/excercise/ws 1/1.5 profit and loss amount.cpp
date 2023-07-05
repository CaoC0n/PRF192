#include<stdio.h>
#include<math.h>

int main()
{
	int a,b;
	printf("profit and loss on a transaction :");
	scanf("%d%d",&a,&b);
	if(a<b)
		printf("You can booked your profit amount : %d", b-a);
	else printf("You can booked your loss amount : %d", a-b);
}
