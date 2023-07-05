#include<stdio.h>

int main()
{
   char grade;
   printf("Input the grade : ");
   scanf("%c",&grade);
   printf("You have chosen : ");
   
	if(grade =='A')  	printf("Average");
	else if(grade =='E')	printf("Excellent");
	else if(grade =='V')	printf("Very Good");
	else if(grade =='G')	printf("Good");
	else if(grade =='F')	printf("Fail");
	else   	printf("Wrong input");
}
