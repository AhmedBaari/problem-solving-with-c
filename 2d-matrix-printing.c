#include <stdio.h>

int main() {
    int i,j;
    int rows=2, columns=2;
    int matrix[rows][columns];
//creating a matrix
    for (i=1; i<=rows; i++) {
        for (j=1; j<=columns; j++) {
//getting the input values for the matrix
            printf("Enter element A%d%d: ", i,j);
            scanf("%d", &matrix[i][j]);
        }
    }
//printing the matrix    
    printf("Now printing the matrix: ");
        printf("\n");
        for (i=1; i<=rows; i++) {
        for (j=1; j<=columns; j++) {
//printing all of the matrix
            printf("%d  ", matrix[i][j]);
        }
        printf("\n");
    }
}
