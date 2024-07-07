//2. Modify selection sort, bubble sort and insertion sort functions to return number of passes and number of comparisons
// and print both in main function.

// selection sort

#include <stdio.h>

void selectionSort(int arr[], int n, int *passes, int *comparisons) {
    int i, j, min_idx;

    *passes = 0;
    *comparisons = 0;

    for (i = 0; i < n-1; i++) {
        min_idx = i;
        (*passes)++;
        for (j = i+1; j < n; j++) {
            (*comparisons)++;
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // Swap the found minimum element with the first element
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
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
    selectionSort(arr, n, &passes, &comparisons);

    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nNumber of passes: %d\n", passes);
    printf("Number of comparisons: %d\n", comparisons);

    return 0;
}
