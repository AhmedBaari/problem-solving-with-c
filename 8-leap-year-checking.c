#include <stdio.h>

/* divisible by 4?
century divisible by 400? */

int main() {

	/* Declaring the necessary variables */
	int year;

	/* Collecting user input */
	printf("Enter a year: ");
	scanf("%d", &year);

	/* To be a leap year, the year should be divisible by 4 */
	if (year % 4 != 0) {
		printf("It is not a leap year");

	/* To be a leap year, the century of it should be divisible by 4 */
	} else if ((year/100)%4 !=0) {
		printf("It is not a leap year");

	/* Matching both conditions, it is a leap year */
	} else {
		printf("It is a leap year");
	}

	printf("\n");
}
