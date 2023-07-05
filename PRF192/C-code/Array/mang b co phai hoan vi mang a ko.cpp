#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100

void nhap (int a[], int &n)
{
    do
    {
        printf("\nNhap so phan tu: ");
        scanf("%d", &n);
        if(n <= 0 || n > MAX)
        {
            printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
        }
    }while(n <= 0 || n > MAX);
    for(int i = 0; i < n; i++)
    {
        printf("\nNhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void xuat(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
    }
}
/*
Khái ni?m hoán v? di?n t? ý tu?ng r?ng nh?ng d?i tu?ng phân bi?t có th? du?c s?p x?p theo nh?ng th? t? khác nhau.
Ví d?, v?i các s? t? m?t d?n sáu, m?i cách s?p th? t? s? t?o thành m?t dãy các s? không l?p l?i. 
M?t hoán v? nhu th? là: "3, 4, 6, 1, 2, 5".
*/
void HoanVi(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void SapXepTangDan(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                HoanVi(a[i], a[j]);
            }
        }
    }
}

void KiemTraBCoPhaiLaHoanViCuaA(int a[],int b[], int na, int nb)
{
    if(na != nb)
    {
        printf("\nKhong phai");      // S? lu?ng ph?n t? ph?i b?ng nhau
        return;
    }
    SapXepTangDan(a, na);           // S?p x?p m?ng a
    SapXepTangDan(b, nb);           // S?p x?p m?ng b
    for(int i = 0; i < na; i++)
    {
        if(a[i] != b[i])              
        {
            printf("\nKhong phai");
            return;
        }
    }
    printf("\nPhai");
    return;
}
int main()
{
    int na, nb;
    int a[MAX], b[MAX];

    nhap(a, na);
    xuat(a, na);

    nhap(b, nb);
    xuat(b, nb);

    KiemTraBCoPhaiLaHoanViCuaA(a, b, na, nb);

    getch();
    return 0;
}
