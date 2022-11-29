#include <stdio.h>
#include <math.h>
// This is a program to calculate simple interest and compound interest

int main () {
	float principal, rate, time, simple_interest, compound_interest;

		/* Get principal */
	printf("Principal: ");
	scanf("%f", &principal);

		/* Get rate	*/
	printf("Rate: ");
	scanf("%f", &rate);

		/* Get time	*/
	printf("No. of years: ");
	scanf("%f", &time);

		/* Calculating Simple Interest */
	simple_interest = principal * rate * time / 100;

		/* Calculating Compound Interest */
	compound_interest = principal * pow((1+ (rate/100)), time) - principal;

		/* Printing the answers */
	printf("\nSimple Interest: %0.3f\nCompound Interest: %0.3f\n", simple_interest, compound_interest);

}
