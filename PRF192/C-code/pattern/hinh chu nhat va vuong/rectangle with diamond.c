/*
 *  *  *  *  *  *  *  *  *  *
 *  *  *  *        *  *  *  *
 *  *  *              *  *  *
 *  *                    *  *
 *                          *
 *  *                    *  *
 *  *  *              *  *  *
 *  *  *  *        *  *  *  *
 *  *  *  *  *  *  *  *  *  *
*/ 
#include <stdio.h>
 
int main()
{
    int n,i, j;
    scanf("%d", &n);
 
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 2 * n; j++)
        {
            if (j <= n - i + 1 || j >= n + i)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
 
    for (i = n - 1; i >= 1; i--)
    {
        for (j = 1; j <= 2 * n; j++)
        {
            if (j <= n - i + 1 || j >= n + i)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
}

