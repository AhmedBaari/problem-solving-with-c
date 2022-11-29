#include <stdio.h>

/* In this program, we will find sum of prime numbers till 10,000 */
int main() {
	// declaring the variables. num is the number, checker is the number to divide and check for reminder, sum is the cumulative sum of the prime numbers
	int num, checker, sum=0;
	// Let's add 2 as it is a prime number
	sum += 2;
	// Checking each number till 10,000
	for (num=2; num<=10000; num++) {
		//Dividing the number by every number below it
		for (checker=2; checker < num; checker++) {
			// If num is divisible by checker, then it is composite
			if (num%checker == 0) {
				break;
			}
			// If no divisibility till the end, then prime
			if (num-checker == 1) {
				//Adding to the sum
				sum += num;
			}
		}
	}
	//printing the sum
	printf("The sum of prime numbers from 1 to 10,000 is %d\n", sum);
}
