#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main() {
	char s[50];
	printf("Enter string:");
	gets(s);
	int i,j;
	// tach tu trong chuoi
	char list[20][50];
	i=0;
	j=0;
	char temp[50];
	int size = 0;
	while(i<strlen(s)) {
		if(s[i]==' ') {
			temp[size] = '\0';
			strcpy(list[j],temp);
			size = 0;
			temp[0]='\0';
			j++;
			printf("%d",j);
		} else if(i==strlen(s)-1) {
			temp[size] = s[i];
			size++;
			temp[size] = '\0';
			strcpy(list[j],temp);
			size = 0;
			temp[0]='\0';
			j++;
			printf("%d",j);
		} else {
			temp[size] = s[i];
			size++;
		}
		i++;
	}
	printf("Result: \n");
	for(i=0; i<j; i++) {
		printf("%s\n",list[i]);
	}
	return 0;
}
