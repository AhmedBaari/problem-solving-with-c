#include <stdio.h>

/* In this program, we will find if a number is prime.
This program is optimized by algorithm optimization */
int main() {
	// declaring the variables. num is the number in loop, checker is the number to divide and check for reminder, limit is the max number to check
	int num, checker, limit=10000, check_limit;

printf("Enter the limit: ");
scanf("%d", &limit);
	if (limit%2 == 0) {
		check_limit = limit/2;
	} else {
	check_limit = (limit+1)/2;
	}
	// Let's add 2 as it is a prime number
	printf("2, ");
	// Checking each number till limit
	for (num=2; num<=limit;num++) {
		//Dividing the number by every number below it
		for (checker=2; checker < check_limit; checker++) {
			// If num is divisible by checker, then it is composite
			if (num%checker == 0) {
				break;
			}
			// If no divisibility till the end, then prime
			if (num-checker == 1) {
				//Adding to the list
				printf("%d ,", num);
			}
		}
	}
	printf("\n");
}
