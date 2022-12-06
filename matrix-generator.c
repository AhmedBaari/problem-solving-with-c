#include <stdio.h>

/* Let's write a code to generate 2 matrices */
int main () {
	/* Number of Matrices */
	int array_size = 2;

	/* Number of columns per matrix */
	int size_2d = 3;

	/* Number of rows per matrix */
	int size_3d = 3;

	/* Creating a 3D array for the matrices */
	int myArray[array_size][size_2d][size_3d];

	/* i = matrix, j = column, k = row */
	int i,j,k,entry;

	/* For every matrix */
	for(i=1; i <= array_size; i++) {
		/* For every column of that matrix*/
		for(j=1; j <= size_2d; j++) {
			/* For every row element of that column */
			for(k=1; k <= size_3d; k++) {
	
				/* Get user input for element */
				printf("Enter element i%d j%d k%d: ", i, j, k);
				scanf("%d", &entry);
				
				/* Enter the element in it's location */
				myArray[i][j][k]=entry;
				printf("\n");
			}
		}
	}

	/* Now, let's print all the elements in a matrix form */
	printf("\nThe matrices are: \n");

	/* For every matrix */
	for(i=1; i <= array_size; i++) {
		printf("\n\nMatrix %d\n", i);
		/* For every column of that matrix*/
		for(j=1; j <= size_2d; j++) {
			printf("\n|");
			/* For every row element of that column */
			for(k=1; k <= size_3d; k++) {
				/* printing the element */
				printf("%d ", myArray[i][j][k]);
			}
			printf("|\n");
		}
	}
}

/* EXAMPLE OUTPUT:
Enter element i1 j1 k1: 7
Enter element i1 j1 k2: 8
Enter element i1 j1 k3: 9
Enter element i1 j2 k1: 4
Enter element i1 j2 k2: 5
Enter element i1 j2 k3: 6
Enter element i1 j3 k1: 1
Enter element i1 j3 k2: 4
Enter element i1 j3 k3: 7
Enter element i2 j1 k1: 8
Enter element i2 j1 k2: 9
Enter element i2 j1 k3: 6
Enter element i2 j2 k1: 5
Enter element i2 j2 k2: 4
Enter element i2 j2 k3: 2
Enter element i2 j3 k1: 1
Enter element i2 j3 k2: 4
Enter element i2 j3 k3: 6

The matrices are: 
Matrix 1

|7 8 9 |
|4 5 6 |
|1 4 7 |

Matrix 2

|8 9 6 |
|5 4 2 |
|1 4 6 |
*/
