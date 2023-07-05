#include<stdio.h>
#include <string.h>
void strInsert(char *s,char *s1, int vt)
{
	char b[100];
	strcpy(b,s+vt);
	s[vt]='\0'; 
	strcat(s,s1);
	strcat(s,b); 
}
void delString(char *s1, char s2[],char s3[])
{
	char *s = 0;
    s = strstr(s1,s2);
    int i = s - s1;
    strcpy(s1+i,s1+i+strlen(s2));	
    strInsert(s1,s3,i);
}
int main() 
{
	char s1[100],s2[100];
	gets(s1);
	gets(s2);
	char s3[50] ="";
	while(strstr(s1,s2) != NULL)
		delString(s1,s2,s3);
	printf("%s\n",s1);
}






//void cat(char s[], int Start, int End, char p[])
//{ 
//    int temp = 0; 
//    int i; 
//    for( i = Start; i<= End; i++)
//    { 
//      	p[temp++] = s[i]; 
//	}
//	p[temp] = '\0';  
//}
//void findWord(char s[], char timtu[],int kq[],int *u)
//{ 
//  	char p[100]; 
//  	(*u) = 0; 
//  	int d = 0; 
//  	int check = 1;
//  	int Start, End;  
//  	int i,j; 
//  	int a = strlen(s); 
//  	for( i = 0; i < a; i++)
//  	{
//  	 	if(s[i] != ' ')
//  	 	{ 
//  	   		Start = i;
//	   		for(j = Start + 1; j <= a; j++) 
//	   		{ 
//	     		if(s[j] == ' ' || s[j] == '\0' )
//	     		{ 
//	      			End = j - 1;  
//	      			cat(s,Start,End,p);
//		  			if(strcmp(timtu,p) == 0)
//		   			{ 
//		     			kq[d] = Start;
//			 			d++;
//			 			(*u)++;   
//		   			} 
//		  			i = j; 
//		  			break; 
//		 		}
//	   		}
//	 	}
//  	} 
//}
//int main()
//{ 
//  	char a[1000]; 
//  	char b[1000]; 
//  	int kq[100]; 
//  	int u = 0,i; 
//  	gets(a); 
//  	gets(b); 
//  	findWord(a,b,kq,&u); 
//  	for(i = 0; i < u; i++)
//  	{ 
//    	printf("%d ",kq[i]); 
//  	}
//  	printf("%s",a);
//}

