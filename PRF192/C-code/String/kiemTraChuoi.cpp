/*
	Input: 
	Please enter string s: FPT University
	Output: 1
	
	Input: 
	Please enter string s: FPT @ University
	Output: 0
	
*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    gets(s);
    int i;
    int check = 1;
    for(i=0;i < strlen(s); i++){
        if(!(s[i]>'a' && s[i]<'z' || s[i]>'A' && s[i]<'Z'|| s[i]==' ')){
            check = 0;
        }
    }
    if(check == 0){
        printf("0");
        
    }else{
        printf("1");
    }
}
