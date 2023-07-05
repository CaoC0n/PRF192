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

int DemSoLanXuatHienCuaMangATrongMangB(int a[], int b[], int na, int nb)
{
    int i, j, Start, flag, dem = 0;
    for(i = 0; i < nb; i++)        // duy?t m?ng b
    {
        if(a[0] == b[i] && nb - i >= na)  // n?u mà ph?n t? d?u tiên c?a m?ng a b?ng v?i 1 ph?n t? b?t k? c?a m?ng b
        {                                   // và s? ph?n t? m?ng b dó tr? di i l?n hon ho?c b?ng s? ph?n t? m?ng a
            Start = i;            // bi?n Start s? là bi?n b?t d?u d? d?m, kh?i t?o ngay t?i i th?a DK
            flag = 1;
            for(j = 0; j < na; j++)
            {
                if(a[j] != b[Start++])
                {
                    flag = 0;
                    break;
                }
            }
            if(flag == 1)
            {
                dem++;
            }
        }
    }
    return dem;
}
int main()
{
    int na, nb;
    int a[MAX], b[MAX];

    printf("\nNhap mang a:");
    nhap(a, na);
    xuat(a, na);

    printf("\nNhap mang b:");
    nhap(b, nb);
    xuat(b, nb);
    
    
    int dem = DemSoLanXuatHienCuaMangATrongMangB(a, b, na, nb);
    printf("\nSo lan xuat hien cua mang a trong mang b = %d", dem);

    getch();
    return 0;
}
