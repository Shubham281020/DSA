// Modify selection sort, bubble sort and insertion sort functions to return number of passes and number of comparisons
// and print both in main function.

// insertion sort

#include <stdio.h>

void insertionSort(int arr[], int n, int *passes, int *comparisons) {
    int i, key, j;
    *passes = 0;
    *comparisons = 0;

    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        (*passes)++;

        while (j >= 0 && arr[j] > key) {
            (*comparisons)++;
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
        (*comparisons)++;
    }
}

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int passes, comparisons;
    insertionSort(arr, n, &passes, &comparisons);

    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nNumber of passes: %d\n", passes);
    printf("Number of comparisons: %d\n", comparisons);

    return 0;
}
