#include <stdio.h>

/* Swap 2 variables 
(i) by using a third variable
(ii) without using a third variable */

int main() {
	/* declaring the variables */
	int value_1, value_2, switcher;

	/* Taking user input for the 2 variables */
	printf("Enter first value: ");
	scanf("%d", &value_1);

	printf("Enter second value: ");
	scanf("%d", &value_2);

	/* Now, swapping the 2 variables: */

	/* Method with using another variable */
	//switcher = value_1, value_1 = value_2, value_2 = switcher;

	/* Method without using another variable */
	value_1 += value_2, value_2 = value_1 - value_2, value_1 -= value_2; 

	/* Printing the result */
	printf("Now, 1st value: %d\nsecond value: %d\n", value_1, value_2);
}
