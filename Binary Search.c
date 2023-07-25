#include <stdio.h>

int main() {
    int i, j, size, temp;
    printf("Enter the Size of Array: ");
    scanf("%d", &size);
    int array[size];
    printf("Enter %d Elements: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    // Sorting using Bubble Sort
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (array[i] > array[j]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    // Print the sorted array
    printf("Sorted Array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Binary Search
    int target, left = 0, right = size - 1, middle;
    printf("Enter the Target Element: ");
    scanf("%d", &target);
    middle = (left + right) / 2;
    while (left <= right) {
        if (array[middle] == target) {
            printf("%d Found at Location %d\n", target, middle);
            return 0;
        } else if (array[middle] < target) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
        middle = (left + right) / 2;
    }
    printf("Target Value not Found in Given Array\n");

    return 0;
}
