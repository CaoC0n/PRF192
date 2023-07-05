#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX 100


int isFull(char list[MAX][21], int *n) {
	return ((*n) == MAX);
}


int isEmpty(char list[MAX][21], int *n) {
	return ((*n) == 0);
}


void add(char list[MAX][21], int *n) {
	char hs[21];
	int i;
	printf("Add a student : ");
	fflush(stdin);
	scanf("%20[^\n]", hs);
	if(hs[0] <= 'z' && hs[0] >= 'a')
		hs[0] -= 32;
	for(i = 0 ; i < strlen(hs); i++)
	{
		if(hs[i + 1] >= 'a' && hs[i + 1] <= 'z')
			hs[i + 1] -= 32;
	}
    strcpy(list[*n], hs);
    (*n)++;
    printf("Added!\n");
}


void search(char list[MAX][21], int *n){
	int i;
	printf("Searching for : ");
	char hs[21];
	fflush(stdin);
    scanf("%20[^\n]", &hs);
    int flag = 0;
	for (i = 0; i < *n; i++)
		{
			if(strcmp(hs,list[i]) == 0)
			{
				printf("RESULT : Name[%d] : %s\n", i, list[i]);
				flag = 1;
			}
		}
	if(flag == 0) {
		printf("Not found!\n");
	}	
}


void removed(char list[MAX][21], int *n) {
	printf("Which Name you want to removed?(index) : ");
	int r, i;
	scanf("%d", &r);
	if (r >= 0 && r < *n) {
	for (i = r + 1; i < *n; i++)
		strcpy(list[i-1], list[i]);
	printf("Removed!\n");
	(*n)--;
	} else printf("UnRemoved!\n");
}


void print(char list[MAX][21], int *n){
	int i;
	for (i = 0; i < (*n); i++)
		{
			printf("Name[%d] : %s \n", i, list[i]);
		}
}


int main() {
    char c;
    printf("1-Add a student\n");
    printf("2-Remove a student\n");
    printf("3-Search a student\n");
    printf("4-Print the list in ascending order\n");
    printf("5-Quit\n");
    char list[MAX][21];
    int n = 0;
    int quit = 1;
    do{
        printf("Choice = ");
    	fflush(stdin);
    	scanf("%c", &c);
        switch(c)
        {
            case '1':
				if (isFull(list, &n)) printf("Impossible to add!\n");
				else add(list, &n);
				break;
            case '2':
				if (isEmpty(list, &n)) printf("Impossible to remove!\n");
				else removed(list, &n);
				break;
            case '3':
				if (isEmpty(list, &n)) printf("Nothing to search!\n");
				else search(list, &n);
				break;
            case '4':
				if (isEmpty(list, &n)) printf("Nothing to print!\n");
				else print(list, &n);
				break;
            case '5':
				printf("Quit!");
				quit = 0;
				break;
        }
       if (c < '1'  || c >'5') printf("1 to 5 only!\n");
    } while (quit == 1);
    return 0;
}