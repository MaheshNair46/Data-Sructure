//aim: to develop a program that implement sparse matrix using array
#include <stdio.h>
// Function to print a matrix
void printMatrix(int matrix[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to count non-zero elements in a matrix
int countNonZeroElements(int matrix[][10], int rows, int cols) {
    int count = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != 0) {
                count++;
            }
        }
    }
    return count;
}

// Function to convert a matrix to triple representation
void convertToTripleRepresentation(int matrix[][10], int rows, int cols, int tripleRepresentation[][10], int* size) {
    int k = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != 0) {
                tripleRepresentation[0][k] = i;
                tripleRepresentation[1][k] = j;
                tripleRepresentation[2][k] = matrix[i][j];
                (*size)++;
                k++;
            }
        }
    }
}

int main() {
    int matrix[10][10];
    int rows, cols, size = 0;

    printf("Enter the number of rows in the matrix: ");
    scanf("%d", &rows);
    printf("Enter the number of columns in the matrix: ");
    scanf("%d", &cols);

    printf("Enter the elements in the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The matrix is:\n");
    printMatrix(matrix, rows, cols);

    size = countNonZeroElements(matrix, rows, cols);
    int tripleRepresentation[3][size];

    convertToTripleRepresentation(matrix, rows, cols, tripleRepresentation, &size);

    printf("Triple representation of the matrix is:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", tripleRepresentation[i][j]);
        }
        printf("\n");
    }

    return 0;
}