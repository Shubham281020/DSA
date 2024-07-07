// Modify selection sort, bubble sort and insertion sort functions to return number of passes and number of comparisons
// and print both in main function.

// Bubble sort 
#include <stdio.h>

void bubbleSort(int arr[], int n, int *passes, int *comparisons) {
    int i, j;
    *passes = 0;
    *comparisons = 0;

    for (i = 0; i < n-1; i++) {
        (*passes)++;
        for (j = 0; j < n-i-1; j++) {
            (*comparisons)++;
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
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
    bubbleSort(arr, n, &passes, &comparisons);

    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nNumber of passes: %d\n", passes);
    printf("Number of comparisons: %d\n", comparisons);

    return 0;
}
