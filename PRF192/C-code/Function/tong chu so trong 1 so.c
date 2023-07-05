#include<stdio.h>

int main()
{
    int n;
    int sotach;
    int sum = 0;
    printf("Nhap n: ");
    scanf("%d",&n);
    for(;n!=0;)
	{
        sotach = n % 10;
        sum += sotach;
        n /= 10;
        printf("%d ", sotach);
    }    
    printf("\n%d\n",sum);
    system("pause");
}
