#include <stdio.h>

void addMatrices(int row, int col, int matrix1[row][col], int matrix2[row][col], int result[row][col]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

int main() {
    int row, col;

    printf("Enter rows: ");
    scanf("%d", &row);

    printf("Entercolumns: ");
    scanf("%d", &col);

    int matrix1[row][col];
    int matrix2[row][col];
    int result[row][col];

    printf("Enter elements of matrix1:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of matrix2:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Call the function to add matrices
    addMatrices(row, col, matrix1, matrix2, result);

    printf("Resultant matrix after addition:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}