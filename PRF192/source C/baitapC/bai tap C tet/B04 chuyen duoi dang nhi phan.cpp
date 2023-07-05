#include<stdio.h>
#include<math.h>
const char CHAR_55 = 55;
const char CHAR_48 = 48;
// chuyen so n tu co so 10 sang co so b
int convertNumber(int n, int b) {
    if (n < 0 || b < 2 || b > 16 ) {
        return 0;
    }
    int i;
    char arr[20];
    int count = 0;
    int m;
    int remainder = n;
    while (remainder > 0) {
        if (b > 10) {
            m = remainder % b;
            if (m >= 10) {
                arr[count] = (char) (m + CHAR_55);
                count++;
            } else {
                arr[count] = (char) (m + CHAR_48);
                count++;
            }
        } else {
            arr[count] = (char) ((remainder % b) + CHAR_48);
            count++;
        }
        remainder = remainder / b;
    }
    // hien thi he co so
    printf("");
    for (i = count - 1; i >= 0; i--) {
        printf("%c", arr[i]);
    }
    return 1;
}

int main()
{
	int n,n2=0,x;
	scanf("%d",&n);
	
	int i=0;
	while (n!=0)
	{
		x  = n%2;
		n2+= (x*pow(10,i));
		n  = n/2;
		i++;
	}	
	printf("So nhi phan cua n la: %d",n2);
}
