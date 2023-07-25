// Comment
#include <stdio.h>

// Function to perform Insertion Sort on an array
void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int currentElement = arr[i];
        int j = i - 1;

        // Move elements greater than the current element to one position ahead of their current position
        while (j >= 0 && arr[j] > currentElement) {
            arr[j + 1] = arr[j];
            j--;
        }

        // Insert the current element at its correct position within the sorted portion
        arr[j + 1] = currentElement;
    }
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

    // Call the insertionSort function to sort the array
    insertionSort(arr, size);

    printf("Sorted Array: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return 0;
}
