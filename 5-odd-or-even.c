#include <stdio.h>

/* Finding whether a number is odd or even */

int main() {
	/* Declaring a variable for the input */
	int value;

	/* Taking input from user */
	printf("Enter a value: ");
	scanf("%d", &value);

	/* If the (value mod 2) gives 0 (remainder), then it is even */
	if (value % 2 == 0) {
		printf("The value is even");

	/* Else, it is odd */
	} else {
		printf("The value is odd");
	}
	
	printf("\n");
}
