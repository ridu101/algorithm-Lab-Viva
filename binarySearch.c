#include <stdio.h>

int main() {
    int size, target, found = -1;

    // Get the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input array elements
    printf("Enter %d sorted elements in ascending order:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the target element to search for
    printf("Enter the element to search: ");
    scanf("%d", &target);

    int left = 0;
    int right = size - 1;

    // Binary search using a for loop
    for (; left <= right;) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            found = mid; // Element found at index 'mid'
            break;
        }
        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    // Output the result
    if (found != -1) {
        printf("Element found at index %d\n", found);
    } else {
        printf("Element not found\n");
    }

    return 0;
}
