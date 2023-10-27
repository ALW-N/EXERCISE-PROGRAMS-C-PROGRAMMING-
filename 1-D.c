#include <stdio.h>

void read_array(int *arr, int n);
void display_array(int *arr, int n);
void display_odd(int *arr, int n);
void display_even(int *arr, int n);
int find_max(int *arr, int n);
void calculate_sum_avg(int *arr, int n, int *sum, float *avg);

int main() {
    int n, sum, max;
    float avg;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    read_array(arr, n);
    printf("The array is: ");
    display_array(arr, n);
    printf("The odd positioned elements are: ");
    display_odd(arr, n);
    printf("The even numbers in the array are: ");
    display_even(arr, n);
    max = find_max(arr, n);
    printf("The maximum number in the array is: %d\n", max);
    calculate_sum_avg(arr, n, &sum, &avg);
    printf("The sum of the numbers in the array is: %d\n", sum);
    printf("The average of the numbers in the array is: %.2f\n", avg);
    return 0;
}

void read_array(int *arr, int n) {
	int i;
    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

void display_array(int *arr, int n) {
	int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void display_odd(int *arr, int n) {
	int i;
    for (i = 1; i < n; i += 2) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void display_even(int *arr, int n) {
	int i;
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int find_max(int *arr, int n) {
	int i;
    int max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void calculate_sum_avg(int *arr, int n, int *sum, float *avg) {
    *sum = 0;
    int i;
    for ( i = 0; i < n; i++) {
        *sum += arr[i];
    }
    *avg = (float)*sum / n;
}

