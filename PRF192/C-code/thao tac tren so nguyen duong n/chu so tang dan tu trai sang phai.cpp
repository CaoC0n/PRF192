#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    // Nh?p n ( n > 0 )
    do
    {
        printf("\nNhap vao n ( n > 0 ): ");
        scanf("%d", &n);

        if (n <= 0)
        {
            printf("\nGia tri ban nhap vao khong hop le. Xin vui long nhap lai! ");
        }

    } while (n <= 0);

    bool CheckTangDan = true;
    int themang = n;
    int ChuSoCuoi = themang % 10;  // l?y ra ch? s? cu?i
    themang /= 10;

    printf("\nCac chu so cua %d co tang dan tu trai sang phai khong ?\n ", n);
    while(themang != 0)
    {
        int ChuSoKeCuoi = themang % 10;
        themang /= 10;
        if (ChuSoCuoi < ChuSoKeCuoi)
        {
            CheckTangDan = false;
            break;
        }
        else
        {
            ChuSoCuoi = ChuSoKeCuoi;  // C?p nh?t l?i ch? s? cho l?n so sánh ti?p theo
        }
    }
    if(CheckTangDan)
        printf("\nDung !");
    else
        printf("Sai !");
    

    getch();
    return 0;
}
