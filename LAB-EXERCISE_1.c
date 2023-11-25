#include <stdio.h>

struct music {
    char artist_name[50];
    int albums;
};

int main() {
    int rows, cols;
    int i, j;

    // Input the dimensions of the 2D arrays
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Declare and input the first 2D array of structures
    struct music array1[rows][cols];
    printf("Enter elements for the first array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter artist name: ");
            scanf("%49s", array1[i][j].artist_name);
            printf("Enter total number of albums: ");
            scanf("%d", &array1[i][j].albums);
        }
    }

    // Declare and input the second 2D array of structures
    struct music array2[rows][cols];
    printf("Enter elements for the second array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter artist name: ");
            scanf("%49s", array2[i][j].artist_name);
            printf("Enter the number of albums: ");
            scanf("%d", &array2[i][j].albums);
        }
    }

    // Merge the arrays horizontally into a new 2D array
    struct music mergedArray[rows][2 * cols];
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            mergedArray[i][j] = array1[i][j];
            mergedArray[i][j + cols] = array2[i][j];
        }
    }

    // Display the merged array
    printf("Merged Array (Horizontal):\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < 2 * cols; j++) {
            printf("Artist Name: %s, Album's: %d\t", mergedArray[i][j].artist_name, mergedArray[i][j].albums);
        }
        printf("\n");
    }

    return 0;
}

