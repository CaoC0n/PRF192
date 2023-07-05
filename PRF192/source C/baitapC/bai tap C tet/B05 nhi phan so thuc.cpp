#include <stdio.h>
#include <math.h>
int arr[100005];
int i=0;
#define NAME "test"
void BinaryInt(int n)
 {
     if(n<0)
      {
          printf("-");
          n=abs(n);
      }
     while(n/2!=0)
       {
           arr[i]=n%2;
           n/=2;
           i++;
       }
     arr[i]=n%2;
    for(;i>=0;i--)
     {
         
         printf("%d",arr[i]);
     }
 }
void io()
 {
     freopen(NAME".inp","r",stdin);
     freopen(NAME".out","w",stdout);
 }
void BinaryMantissa(double n)
 {
   //  printf("\n%lf\n",n);
     if(n==0) return;
     printf(".");
     int i;
     for(i=0;i<100;i++)
      {
          n*=2;
         // printf("\n%lf\n",n);
          if(n<1)
            {
                printf("%d",0);          
            }
          else 
           {
               printf("%d",1);
               n-=1;
           }
          if(n==0) return;
      }
 }
int main()
 {
     //io();
     double n;
     scanf("%lf",&n);
     int a=(int) trunc(n);
     //printf("%d\n",a);
     BinaryInt(a);
     n-=a;
     n=fabs(n);
    // printf("\n%lf",n);
     BinaryMantissa(n);

 }
