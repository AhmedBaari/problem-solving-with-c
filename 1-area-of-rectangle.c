#include <stdio.h>

/* Finding the area of the rectangle */

int main() {
	/* Declaring the variables */
	int length, breadth, area;

	/* Getting length as input */
	printf("Enter length of rectangle: ");
	scanf("%d", &length);

	/* Getting breadth as input */
	printf("Enter breadth of rectangle: ");
	scanf("%d", &breadth);

	/* Calculating area */
	area = length * breadth;

	/* Printing area */
	printf("The area of the rectangle is %d square units.\n", area);
}
