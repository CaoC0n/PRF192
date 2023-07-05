
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
 
 
struct Custom{
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
    printf("\nNhap ten: "); fflush(stdin); gets(sv.ten);
    printf("\nNhap dob: "); fflush(stdin); gets(sv.dob);
    printf("\nNhap address: "); fflush(stdin); gets(sv.adr);
    printf("\nNhap tele: "); fflush(stdin); gets(sv.tele);
    printf("\nNhap open date: "); fflush(stdin); gets(sv.odate);
    printf("\nNhap balance: "); scanf("%f", &sv.balan);fflush(stdin);
    printf("\nNhap id number: "); scanf("%d", &sv.id);
}
 
void nhapN(SV a[], int n){
    printf("\n____________________________________\n");
    for(int i = 0; i< n; ++i){
        printf("\nNhap SV thu %d:", i+1);
        nhap(a[i]);
    }
    printf("\n____________________________________\n");
}
 
void xuat(SV sv){    
    printf("%d%15s%15s%15s%15s%15s%15d\n", sv.id, sv.ten,sv.dob, sv.adr, sv.tele , sv.odate, sv.balan);
}
 
void xuatCustom(SV a[], int n){
    printf("\n____________________________________\n");
	printf("%s%15s%15s%15s%15s%15s%15s\n","ID Number", "Name owner","Date of birth","Address", "Telephone" , "Opening Date", "Balance");
  
    for(int i = 0;i < n;++i){
            xuat(a[i]);
    }
    printf("\n____________________________________\n");
}
 
void sapxep(SV a[], int n){
   
    SV tmp;
    for(int i = 0;i < n;++i){
        for(int j = i+1; j < n;++j){
            if(a[i].id > a[j].id){
            //	if()
	                tmp = a[i];
	                a[i] = a[j];
	                a[j] = tmp;
            }
        }
    }
} 
 
void xuatFile(SV a[], int n, char fileName[]){
    FILE * fp;
    fp = fopen (fileName,"w");
    fprintf(fp, "%s%15s%15s%15s%15s%15s%15s\n","ID Number", "Name owner","Date of birth","Address", "Telephone" , "Opening Date", "Balance");
    for(int i = 0;i < n;i++){
        fprintf(fp, "%d%15s%15s%15s%15s%15s%15d\n", a[i].id, a[i].ten,a[i].dob, a[i].adr, a[i].tele , a[i].odate, a[i].balan);
    }
    fclose (fp);
}
void nhapFileBinary(SV a[], int n, char fileName[]){
    FILE * fp;
    fp = fopen (fileName,"wb");
    fprintf(fp, "%s%15s%15s%15s%15s%15s%15s\n","ID Number", "Name owner","Date of birth","Address", "Telephone" , "Opening Date", "Balance");
    for(int i = 0;i < n;i++){
       // fwrite(fp, "%d%15s%15s%15s%15s%15s%15d\n", a[i].id, a[i].ten,a[i].dob, a[i].adr, a[i].tele , a[i].odate, a[i].balan);
       fwrite(&a[i], sizeof(struct Custom),1,fp);
    }
    fclose (fp);
}

void xuatFileBinary(SV a[], int n, char fileName[]){
    FILE * fp;
    fp = fopen (fileName,"rb");
    fprintf(fp, "%s%15s%15s%15s%15s%15s%15s\n","ID Number", "Name owner","Date of birth","Address", "Telephone" , "Opening Date", "Balance");
    for(int i = 0;i < n;i++){
       // fwrite(fp, "%d%15s%15s%15s%15s%15s%15d\n", a[i].id, a[i].ten,a[i].dob, a[i].adr, a[i].tele , a[i].odate, a[i].balan);
       fread(&a[i], sizeof(struct Custom),1,fp);
       xuat(a[i]);
    }
    fclose (fp);
}
int main(){
    int key;
    char fileName[] = "increase.txt";
    int n;
    bool daNhap = false;
    do{
        printf("\nNhap so luong Custom: "); scanf("%d", &n);
    }while(n <= 0);
    SV a[n];
    while(true){
        system("cls");
        printf("******************************************\n");
        printf("**    CHUONG TRINH QUAN LY              **\n");
        printf("**      1. Nhap du lieu                 **\n");
        printf("**      2. In danh sach                 **\n");
        printf("**      3. Sap xep custom theo id       **\n");
        printf("**      0. Thoat                        **\n");
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
                    printf("\nBan da chon sap xep Customer theo id!");
                    sapxep(a, n);
                    xuatCustom(a, n);
                    xuatFile(a, n, fileName);
                    nhapFileBinary(a,n,"Cus.dat");
                    xuatFileBinary(a,n,"Cus.dat");
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
 
