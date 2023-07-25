#include <stdio.h>

// Function to merge two sorted arrays into a single sorted array
void merge(int arr[], int left[], int leftSize, int right[], int rightSize) {
    int i = 0, j = 0, k = 0;

    // Compare elements from left[] and right[] arrays and place them in ascending order in arr[]
    while (i < leftSize && j < rightSize) {
        if (left[i] <= right[j])
            arr[k++] = left[i++];
        else
            arr[k++] = right[j++];
    }

    // Copy any remaining elements from left[] and right[] arrays to arr[]
    while (i < leftSize)
        arr[k++] = left[i++];
    while (j < rightSize)
        arr[k++] = right[j++];
}

// Function to perform merge sort on an array
void mergeSort(int arr[], int size) {
    if (size <= 1)
        return;

    // Find the middle index
    int mid = size / 2;

    // Divide the array into two halves: left[] and right[]
    int left[mid];
    int right[size - mid];

    // Copy elements from the original array to the left[] and right[] arrays
    for (int i = 0; i < mid; i++)
        left[i] = arr[i];
    for (int i = mid; i < size; i++)
        right[i - mid] = arr[i];

    // Recursively call mergeSort() on the left[] and right[] arrays
    mergeSort(left, mid);
    mergeSort(right, size - mid);

    // Merge the sorted left[] and right[] arrays back into arr[]
    merge(arr, left, mid, right, size - mid);
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }


    mergeSort(arr, size);

    printf("Sorted Array: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return 0;
}
