#include <stdio.h>

/* In this program, we will be trying out the fibonacci series 
In fibonacci series, each number is the sum of its previous 2 numbers. */

/* Function to process fibonacci series by recursion */
int fibonacci(int term_x, int term_y, int size) {
	if (size !=0) {
		int sum = term_x+term_y;
		printf("%d ,", sum);

		/* Calling function recursively */
		return fibonacci(term_y, sum, size-1);
	} else {
		return 0;
	}
}

int main () {
	/* Input - Number of elements to show */
	int size;
	printf("Number of elements to show: ");
	scanf("%d", &size);
	
	/* Declaring and printing first 2 terms */
	int term_1=0, term_2=1, result, i;
	printf("\nUsing For Loop:\n%d, %d, ", term_1, term_2);

	/* The fibonacci series loop process */
	for (i=2; i < size; i++) {
		result = term_1 + term_2;
		printf("%d, ",result);
		term_1 = term_2;
		term_2= result;
	}
	

	/* Using Recursion */
	printf("\n\nUsing recursion: ");
	int term_x=0, term_y=1;
	printf("\n%d, %d, ", term_x, term_y);

	/* Launching recursion process */
	int process = fibonacci(0,1, size-2);
	printf("\n\n");

}
