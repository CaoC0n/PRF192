
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
 
 
struct Custom{ // struct la kieu du lieu gom nhieu thanh phan voi kieu khac nhau
    char ten[30]; //ten
    char dob[30]; // dob
    char adr[30]; // address
    char tele[30]; // tele
    float balan; // balance
    char odate[30]; // open date 
    int id;
};
 
typedef Custom SV;

void nhap(SV &sv){
    printf("\nNhap ten: "); fflush(stdin); gets(sv.ten); // nhap thanh phan ten
    printf("\nNhap dob: "); fflush(stdin); gets(sv.dob); // nhap thanh phan dob
    printf("\nNhap address: "); fflush(stdin); gets(sv.adr);
    printf("\nNhap tele: "); fflush(stdin); gets(sv.tele);
    printf("\nNhap open date: "); fflush(stdin); gets(sv.odate);
    printf("\nNhap balance: "); scanf("%f", &sv.balan);fflush(stdin);
    printf("\nNhap id number: "); scanf("%d", &sv.id);
}
 
void nhapN(SV a[], int n){ // nhap 1 mang struct 
    printf("\n____________________________________\n");
    for(int i = 0; i< n; ++i){
        printf("\nNhap Custom thu %d:", i+1);
        nhap(a[i]);
    }
    printf("\n____________________________________\n");
}
 
void xuat(SV sv){    
    printf("%d%15s%15s%15s%15s%15s%15f\n", sv.id, sv.ten,sv.dob, sv.adr, sv.tele , sv.odate, sv.balan);
}
 
void xuatCustom(SV a[], int n){
    printf("\n____________________________________\n");
	printf("%s%15s%15s%15s%15s%15s%15s\n","ID Number", "Name owner","Date of birth","Address", "Telephone" , "Opening Date", "Balance");
  
    for(int i = 0;i < n;++i){
            xuat(a[i]);
    }
    printf("\n____________________________________\n");
}
 
void increase(SV a[], int n){ // sap xep tang dan
    SV tmp;
    for(int i = 0;i < n;++i){
        for(int j = i+1; j < n;++j){
            if(a[i].balan > a[j].balan){
	                tmp = a[i];
	                a[i] = a[j];
	                a[j] = tmp;
            }
        }
    }
} 

void decrease(SV a[], int n){ // sap xep giam dan
    SV tmp;
    for(int i = 0;i < n;++i){
        for(int j = i+1; j < n;++j){
            if(a[i].balan < a[j].balan){
	                tmp = a[i];
	                a[i] = a[j];
	                a[j] = tmp;
            }
        }
    }
} 


 
void xuatFile(SV a[], int n, char fileName[]){
    FILE * fp;
    fp = fopen (fileName,"w"); //
    fprintf(fp, "%s%15s%15s%15s%15s%15s%15s\n","ID Number", "Name owner","Date of birth","Address", "Telephone" , "Opening Date", "Balance");
    for(int i = 0;i < n;i++){
        fprintf(fp, "%d%15s%15s%15s%15s%15s%15f\n", a[i].id, a[i].ten,a[i].dob, a[i].adr, a[i].tele , a[i].odate, a[i].balan);
    }
    fclose (fp);
}

int main(){
    int key;
    int n;
    bool daNhap = false;
    do{
        printf("\nNhap so luong Custom: "); scanf("%d", &n);
    }while(n <= 0);
    SV a[n];
    while(true){
        system("cls");
        printf("******************************************\n");
        printf("**    CHUONG TRINH QUAN LY                   **\n");
        printf("**      1. Nhap du lieu                      **\n");
        printf("**      2. In danh sach                      **\n");
        printf("**      3. Sap xep custom tang theo Balance  **\n");
        printf("**      4. Sap xep custom giam theo Balance  **\n");
        printf("**      0. Thoat                             **\n");
        printf("******************************************\n");
        printf("**       Nhap lua chon cua ban          **\n");
        scanf("%d",&key);
        switch(key){
            case 1:
                printf("\nBan da chon nhap DS Customer!");
                nhapN(a, n);
                printf("\nBan da nhap thanh cong!");
                daNhap = true;
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 2:
                if(daNhap){
                    printf("\nBan da chon xuat DS Customer!");
                    xuatCustom(a, n);
                }else{
                    printf("\nNhap DS Customer truoc!!!!");
                }
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 3:
                if(daNhap){
                    printf("\nBan da chon sap xep Customer theo Calance!");
                    decrease(a, n);
                    xuatCustom(a, n);
                    xuatFile(a, n, "Decrease.txt");
                }else{
                    printf("\nNhap DS Customer truoc!!!!");
                }
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 4:
                if(daNhap){
                    printf("\nBan da chon sap xep Customer theo Calance!");
                    increase(a, n);
                    xuatCustom(a, n);
                    xuatFile(a, n, "Increase.txt");
                }else{
                    printf("\nNhap DS Customer truoc!!!!");
                }
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 0:
                printf("\nBan da chon thoat chuong trinh!");
                getch();
                return 0;
            default:
                printf("\nKhong co chuc nang nay!");
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
        }
    }
}
 
