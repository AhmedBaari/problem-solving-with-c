#include <stdio.h>

/* Program to convert the input celcius value to fahrenheit value */

int main() {
	/* Declaring the necessary variables */
	int celcius, fahrenheit;

	/* Taking the celcius value input */
	printf("Enter the temperature value in Celcius: ");
	scanf("%d", &celcius);

	/* To convert to fahrenheit, we multiply the celcius value with (9/5) and then add (32) to it */
	fahrenheit = ((celcius * 9/5) + 32);

	/* Printing the output */
	printf("The temperature in fahrenheit is %d\n", fahrenheit);
}
