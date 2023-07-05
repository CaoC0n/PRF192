//reverse string of number
 
#include <stdio.h>
int reverse(int n)
{
    int reNum = n % 10;
    n /= 10;
    int last;
    while (n > 0)
    {
        last = n % 10;
        n /= 10;
        reNum = reNum * 10 + last;
    }
    return reNum;
}
int main()
{
	
    int n;
    printf("INPUT NUMBER: ");
    scanf("%d", &n);
    printf("REVERSE NUMBER OF %d IS %d ", n, reverse(n));
    return 0;
}

