#include <stdio.h>
#include <string.h>
int main()
{
    system("cls");
    // INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
    char s[100];
    gets(s);
    int i, j, count = 0;
    char tmp[50][50];
    for (i = 0; i < strlen(s); i++)
    {
        j = 0;
 
        while (s[i] != ' ' && s[i] != '\0')
        {
            tmp[count][j] = s[i];
            j++;
            i++;
        }
        tmp[count][j] = '\0';
        if (tmp[count][0] != 'a' && tmp[count][0] != 'e' && tmp[count][0] != 'i' && tmp[count][0] != 'o' && tmp[count][0] != 'u'
			&& tmp[count][0] != 'A' && tmp[count][0] != 'E' && tmp[count][0] != 'I' && tmp[count][0] != 'O' && tmp[count][0] != 'U')
            count++;
    }
 
    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE:
 
    printf("%d", count);
 
    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return (0);
}

