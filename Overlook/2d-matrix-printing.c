#include <stdio.h>

int main() {
    int i,j;
    int rows=2, columns=2;
    int matrix[rows][columns];
    for (i=1; i<=rows; i++) {
        for (j=1; j<=columns; j++) {
            printf("Enter element A%d%d: ", i,j);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("Now printing the matrix: ");
        printf("\n");
        for (i=1; i<=rows; i++) {
        for (j=1; j<=columns; j++) {
            printf("%d  ", matrix[i][j]);
        }
        printf("\n");
    }
}