#include <stdio.h>
#include <string.h>

#define MAX_NAMES 100
#define MAX_NAME_LENGTH 50

void readNames(char names[][MAX_NAME_LENGTH], int n) {
	int i;
    printf("Enter %d names:\n", n);
    for ( i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }
}

void displayNames(char names[][MAX_NAME_LENGTH], int n) {
	int i;
    printf("Names:\n");
    for ( i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }
}

void bubbleSortNames(char names[][MAX_NAME_LENGTH], int n) {
	int i,j;
    for ( i = 0; i < n - 1; i++) {
        for ( j = 0; j < n - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                char temp[MAX_NAME_LENGTH];
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the number of names: ");
    scanf("%d", &n);

    if (n > MAX_NAMES) {
        printf("Error: Exceeded the maximum number of names.\n");
        return 1;
    }

    char names[MAX_NAMES][MAX_NAME_LENGTH];

    readNames(names, n);
    printf("Entered Names:\n");
    displayNames(names, n);

    bubbleSortNames(names, n);

    printf("Sorted Names:\n");
    displayNames(names, n);

    return 0;
}

