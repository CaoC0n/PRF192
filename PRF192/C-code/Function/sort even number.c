#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
 
 
int main()
{
    // system("cls");
    // INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
    int arr[5];
    int i, j;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
 
    // Fixed Do not edit anything here.
    printf("OUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE:
    for (i = 0; i < 5; i++)
    {
        for (j = 4; j > i; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = tmp;
            }
        }
    }
 
    for (i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d\n", arr[i]);
        }
    }
}

