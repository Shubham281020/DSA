//linear search using recursion

#include <stdio.h>


int comparisons = 0; 

int linearSearch(int arr[], int size, int target) {
    comparisons++;
    if (size == 0) {
        return -1;  //  if size is 0, target is not found
    }
    if (arr[size - 1] == target) {
        return size - 1;  // Target found, return its index
    }
    return linearSearch(arr, size - 1, target);  // Recur with reduced size
}

int main() {
    int n, target;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &target);

    int result = linearSearch(arr, n, target);
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }

    printf("Number of comparisons: %d\n", comparisons);

    return 0;
}

