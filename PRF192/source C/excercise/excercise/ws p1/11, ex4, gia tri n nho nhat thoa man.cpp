#include<stdio.h>

int main(){
	float n,a,sum =0;
	printf("nhap vao so a: ");
	scanf("%f",&a);
	
//	for(n =1; ;n++)
//	{
//		sum += 1/n;
//		if(sum>a) break;
//	}
	
	n=1;	
	while(sum<a)
	{
		sum+= 1/n;
		n++;
	}
	
	printf("tong: %f\n",sum);
	printf("so n can tim là: %f",n-1);
}
