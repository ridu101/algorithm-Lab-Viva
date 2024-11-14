#include <stdio.h>

int main() {
    int size, target, found = -1;

    // Get the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input array elements
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the target element to search for
    printf("Enter the element to search: ");
    scanf("%d", &target);

    // Linear search
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            found = i; // Element found at index 'i'
            break;
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

