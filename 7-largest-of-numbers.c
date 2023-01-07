#include <stdio.h>

// Finding the largest of 3 numbers using array sorting
// This program is not complete and has an error

int main () {
	int numbers[3], i, j, temp;

	printf("Enter three numbers: ");
	scanf("%d", &numbers[0]);
	scanf("%d", &numbers[1]);
	scanf("%d", &numbers[2]);

	for (i=0; i<sizeof(numbers); i++) {
		for (j=0; j<i; j++) {
			if (numbers[i]>numbers[j]) {
				temp = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = temp;
			}
		}
	}
}

/* ERROR

*** stack smashing detected ***: ./7-largest-of-numbers terminated
Aborted (core dumped)

*/
