#include<stdio.h>
#include<string.h>

void del(int a[], int *n, int k)
{
	int i;
	for (i=k; i<*n-1; i++)
		a[i] = a[i+1];
	(*n)--;
}
int countNum(int *s,int *n,int x)
{
	int i,sum = 0;
	for (i = 0; i < *n; i++)
		if (s[i]==x)  
		{
			sum++;
			if (sum >= 2) 
			{
				del(s,n,i);
				i--;
			}	
		}
	return sum;
}
swap(int &a, int &b){
	int temp;
	temp=a;
	a=b;
	b=temp;
}

main()
{
	int a[101]={111,33,44,55,66,33,33,66};
	int i,j, n = 8,k=0;
	int c[100],d[100];
	for (i = 0; i < n; i++)
		if (a[i] %3 == 0)
		{
			c[k]=countNum(a,&n,a[i]) ;
			d[k]=a[i];
			k++;
		}
	for(int i=0; i<k; i++)
		for(int j=i+1; j<k; j++)
			if (c[i]<c[j])
			{
				swap(c[i],c[j]);
				swap(d[i],d[j]);
			}	
	for (i = 0; i < k; i++)	
		printf("%3d %3d\n",c[i],d[i]);		
}
//#include <stdio.h>
//void del(int a[], int *n, int k){
//	int i;
//	for (i=k; i<*n-1; i++){
//		a[i]=a[i+1];
//	}
//	(*n)--;
//}
//int main(){
//	int a[100];
//	int n, i, j, dem[i];
//	scanf ("%d", &n);
//	for (i=0; i<n; i++){
//		scanf ("%d", &a[i]);
//	}
//	for (i=0; i<n; i++){
//		if (a[i]%3!=0){
//			del(a, &n, i);
//		}
//	}
//	for (i=0; i<n; i++)
//		dem[i]=1;
//	for (i=0; i<n; i++){
//		for (j=i+1; j<n; j++){
//			if (a[i]==a[j]){
//				dem[i]++;
//				del (a, &n, j);
//				j--;
//			}
//		}
//	}
//	
//	for (i=0; i<n; i++){
//		int dtg, tg;
//		for (j=i+1; j<n; j++){
//			if (dem[i]<dem[j]){
//				dtg=dem[i];
//				tg=a[i];
//				dem[i]=dem[j];
//				a[i]=a[j];
//				dem[j]=dtg;
//				a[j]=tg;
//			}
//		}
//	}	
//	for (i=0; i<n; i++)
//		printf ("\n%3d %3d\n",dem[i], a[i]);
//return 0;
//}
