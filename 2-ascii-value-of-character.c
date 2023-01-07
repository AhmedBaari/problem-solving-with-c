#include <stdio.h>

/* Question: Show the ASCII value of the input character *
 We will be doing this by printing the integer value of the character */

int main() {
	/* Declaring a character variable named "value" */
	char value;

	/* Taking character as a user input */
	printf("Enter a character: ");
	scanf("%c",&value);

	/* Printing the integer value (ASCII) of the character */
	printf("The ASCII value of the character is %d\n", value);
}
