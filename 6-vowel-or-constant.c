#include <stdio.h>

/* Finding if an input character is a vowel or consonant */

int main () {
	/* Declaring the necessary variables */
	char value;
	int i;
	
	/* List of vowels */
	char vowels[5] = {'a', 'e', 'i', 'o', 'u'};

	/* Taking user input */
	printf("Enter a character: ");
	scanf("%c", &value);

	/* Looping through the array of vowels */
	for (i=0; i<sizeof(vowels); i++) {
		
		/* Checking if any of the elements of vowels array matches the character */
		if (value == vowels[i]) {
			printf("The character is a vowel\n");
			break;
	
		/* If no match till end of array, then it is a consonant */
		} else if (i==sizeof(vowels)-1) {
			printf("The character is a consonant\n");
		}
	}
}
