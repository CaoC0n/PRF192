#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


void enter(int *a) {
	for(int i = 0; i < 5; i++) {
		scanf("%d", &a[i]);
	}
}


void sort(int *a, int n) {
	for(int i = 0; i < n-1; i++) {
		for(int j = i+1; j < n; j++) {
			if(a[i] > a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}



int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n = 5;
  int a[10];
  enter(a);
  sort(a, n);
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for(int i = 0; i < n; i++) {
	if(a[i] % 2 != 0) {
		printf("%d\n", a[i]);
	}
  }


  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
