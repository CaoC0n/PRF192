#include<stdio.h>
void Checktanso(int b[],int n);
int main(){
	int arr[7];
	int i;
	int j=0;
	int b[7];
	for(i=0;i<7;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<7;i++){
		if(arr[i]/10>=1&&arr[i]/10<=9){
			b[j]=arr[i];
			j++;
		}
	}
	if(j==0)printf("There is no two-digit number");
	else Checktanso(b,j);	
}

void Checktanso(int b[],int n){
	int i,j;
	int brr[7];
	for(i=0;i<n;i++){
		brr[i]=0;
	}
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(b[j]==b[i]){
				brr[i]=brr[i]+1;
			}
		}
	}
    int max=brr[0];
    for(i=0;i<n;i++){
    	if(max<brr[i]){
    		max=brr[i];
		}
	}
    printf("Ouput:\n");
	for(i=0;i<n;i++){
		if(brr[i]==max){
		printf("%d ",b[i]); 
		}
	}
}
