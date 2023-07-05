#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main() {
    system("cls");
    // INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
    int a, tmp, count = 0;
    scanf("%d", &a);
    tmp = a;
    while (a % 3 == 0) {
        a /= 3;
        count++;
    }
    // Fixed Do not edit anything here.
    printf("OUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE:
    if (a == 1) {
        printf("%d", count);
    }
    else {
        printf("%d is not a power of 3", tmp);
    }
    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return (0);
}

