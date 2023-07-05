#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int i, n;
    do
    {
    printf("\nNhap n: ");
    scanf("%d", &n);

       if(n <= 0)
           printf("\nn phai > 0. Xin nhap lai !");

    }while(n <= 0);
    /*S? chính phuong là s? mà k?t qu? khai can b?c 2 là 1 s? nguyên
    sqrt(4) = 2.00000 => ép v? nguyên = 2 => vì 2.000  == 2 (true) => là s? chính phuong
    sqrt(5) = 2.23234 => ép v? nguyên = 2 => vì 2.4324 != 2 (false) => không là s? chính phuong*/
    if (sqrt((float)n) == (int)sqrt((float)n))  // So sánh 2 s? khi chua ép v? ki?u nguyên và s? dã ép v? ki?u nguyên
    {
        printf("\n%d La so chinh phuong", n);
    }
    else
    {
        printf("\n%d Khong la so chinh phuong", n);
    }

    getch();
    return 0;
}
