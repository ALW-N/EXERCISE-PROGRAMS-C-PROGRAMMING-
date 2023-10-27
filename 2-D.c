#include <stdio.h>
#include <stdbool.h>

// Function to read n x n matrix
void readMatrix(int *matrix, int n) {
	int i,j;
    printf("Enter the elements of the %dx%d matrix:\n", n, n);
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < n; j++) {
            scanf("%d", &matrix[i * n + j]);
        }
    }
}

// Function to display n x n matrix
void displayMatrix(int *matrix, int n) {
	int i,j;
    printf("Matrix:\n");
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < n; j++) {
            printf("%d\t", matrix[i * n + j]);
        }
        printf("\n");
    }
}

// Function to calculate the row total of a given matrix
void calculateRowTotal(int *matrix, int n, int rowIndex, int *total) {
	int j;
    *total = 0;
    for ( j = 0; j < n; j++) {
        *total += matrix[rowIndex * n + j];
    }
}

// Function to check if the matrix is an identity matrix
bool isIdentityMatrix(int *matrix, int n) {
	int i,j;
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < n; j++) {
            if (i == j && matrix[i * n + j] != 1) {
                return false;
            } else if (i != j && matrix[i * n + j] != 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n,i,j;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    readMatrix(&matrix[0][0], n);
    displayMatrix(&matrix[0][0], n);

    int rowIndex;
    printf("Enter the row index to calculate total: ");
    scanf("%d", &rowIndex);

    int total;
    calculateRowTotal(&matrix[0][0], n, rowIndex, &total);
    printf("Total of row %d: %d\n", rowIndex, total);

    if (isIdentityMatrix(&matrix[0][0], n)) {
        printf("The given matrix is an identity matrix.\n");
    } else {
        printf("The given matrix is not an identity matrix.\n");
    }

    return 0;
}
