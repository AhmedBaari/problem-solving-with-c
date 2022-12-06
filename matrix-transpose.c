#include <stdio.h>

/* Let's make a C program to get transpose of a matrix*/

int main() {
int i,j;
int matrix[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};

/* Printing initial matrix */
printf("Initial Matrix:\n");
for (i=0; i<4; i++) {
	printf("|");
	for (j=0; j<3; j++) {
		printf("%d ", matrix[i][j]);
	}
	printf("|\n");
}

/* Transformation */
/* mxn of initial matrix is now nxm of new matrix */
int new_matrix[3][4];
for (i=0; i<3; i++) {
	for (j=0; j<4; j++) {
		/* Each ij element of initial matrix is now the ji element of new matrix */
		new_matrix[i][j] = matrix[j][i];
	}
}

/*Printing new matrix */
printf("\nNew Matrix:\n");
for (i=0; i<3; i++) {
	printf("|");
	for (j=0; j<4; j++) {
		printf("%d ", new_matrix[i][j]);
	}
	printf("|\n");
}
}

/*
Output:
Initial Matrix:
|1 2 3 |
|4 5 6 |
|7 8 9 |
|10 11 12 |

New Matrix:
|1 4 7 10 |
|2 5 8 11 |
|3 6 9 12 |
*/
