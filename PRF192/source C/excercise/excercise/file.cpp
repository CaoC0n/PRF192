#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   char num[101];
   FILE *fptr;
 
   	char fName[100];
  	printf("Nhap ten file input 1: ");
	gets(fName);
	if ((fptr = fopen(fName,"r")) == NULL){
       printf("Error! opening file");
       exit(1);
   }
   char in1[100];
    while (fscanf(fptr, "%s ", num) != EOF)
    {
        strcat(in1,num);
        strcat(in1," ");
    }
  //  fscanf(fptr,"%s", &num); 
    fclose(fptr); 
 	
 	char input[101];
 	char fName2[100];
  	printf("Nhap ten file input 2: ");
	gets(fName2);
	if ((fptr = fopen(fName2,"r")) == NULL){
       printf("Error! opening file");
       exit(1);
   }
   while (fscanf(fptr, "%s ", num) != EOF)
   	{
   		strcat(input,num);
   		strcat(input," ");
	}
    fclose(fptr); 
 	
 	char file[100];
 	printf("Nhap ten file moi: ");
 	gets(file);
	fptr = fopen(file,"a");
   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }
   fprintf(fptr,"%s\n",in1);	
   fprintf(fptr,"%s",input);	
   printf("Noi dung 2 file da nhap thanh cong!");
   return 0;
}
