// Write a C program to find the biggest of 3 numbers without using logical operators.
//Biggest of 3 numbers without using if statement.
#include <stdio.h>

int main () {
int a = 10, b = 6, c = 5;

if (a>b) {
	if (a>c) {
		// a>b,c
		printf("A is the greatest");
	} else {
		// c>a>b
		printf("C is the greatest");
	}

} else {
	if (b>c) {
		// b>a,c
		printf("B is the greatest");
	} else {
		// c>b>a
		printf("C is the greatest");
	}

}
}
