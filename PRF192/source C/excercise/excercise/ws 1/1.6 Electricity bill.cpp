#include<stdio.h>
#include<string.h>  

int main()
{  
    int a,b;
    float chg, surchg=0, x,kq;
    char str[100];

    printf("Input Customer ID :");
    scanf("%d",&a);
    printf("Input the name of the customer :");
    scanf("%s",str);
    printf("Input the unit consumed by the customer : ");
    scanf("%d",&b);
    
    if (b <200 )				chg = 1.20;
    else if (b>=200 && b<400)	chg = 1.50;
	else if (b>=400 && b<600)	chg = 1.80;
	else						chg = 2.00;
    x = b*chg;	   
    if (x>300)		surchg = x*15/100.0;
    kq = x+surchg;
    if (kq  < 100) 	kq =100;
    
    printf("\nElectricity Bill\n");
    printf("Customer IDNO                       :%d\n",a);
    printf("Customer Name                       :%s\n",str);
    printf("unit Consumed                       :%d\n",b);
    printf("Amount Charges @Rs. %4.2f  per unit :%8.2f\n",chg,x);
    printf("Surchage Amount                     :%8.2f\n",surchg);
    printf("Net Amount Paid By the Customer     :%8.2f\n",kq);
}  
