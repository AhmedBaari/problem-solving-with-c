#include <stdio.h>
#include <string.h>

/* In this program, we will reverse a string without using the string function "strrev" */
void main () {
	
	/* Collecting user input */
	char given[100]="";
	printf("Enter a string: ");
	gets(given);

	/* Reversing the string */
	int i;
	char final[100];
	for (i=0; i<=strlen(given); i++) {
		final[i] = given[strlen(given)-i];
	}
	
	/* Printing the new string */
	for (i=0; i<=strlen(given); i++) {
		printf("%c",final[i]);
	}	
	printf("\n");
}
