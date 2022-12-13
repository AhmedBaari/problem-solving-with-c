#include <stdio.h>

int main() {
    int i,j;
    int rows=2, columns=2;
    int matrix1[rows][columns], matrix2[rows][columns];
    
    /* MATRIX 1 */
    for (i=1; i<=rows; i++) {
        for (j=1; j<=columns; j++) {
            printf("Enter element A%d%d: ", i,j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    
    /* MATRIX 2 */
    for (i=1; i<=rows; i++) {
        for (j=1; j<=columns; j++) {
            printf("Enter element A%d%d: ", i,j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    
    printf("Now adding the matrices: ");
        printf("\n");
        for (i=1; i<=rows; i++) {
        for (j=1; j<=columns; j++) {
            printf("%d  ", matrix1[i][j]+matrix2[i][j]);
        }
        printf("\n");
    }
}