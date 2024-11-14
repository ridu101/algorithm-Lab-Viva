#include <stdio.h>

int main() {
    int size;

    // Get the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input array elements
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Merge Sort - Iterative approach
    int temp[size]; // Temporary array for merging

    // Size of subarrays to be merged
    for (int width = 1; width < size; width *= 2) {
        for (int i = 0; i < size; i += 2 * width) {
            int left = i;
            int mid = i + width;
            int right = i + 2 * width;
            if (mid >= size) mid = size;
            if (right > size) right = size;

            // Merge the two halves
            int k = left, j = mid, m = left;
            while (k < mid && j < right) {
                if (arr[k] <= arr[j]) {
                    temp[m++] = arr[k++];
                } else {
                    temp[m++] = arr[j++];
                }
            }
            while (k < mid) {
                temp[m++] = arr[k++];
            }
            while (j < right) {
                temp[m++] = arr[j++];
            }

            // Copy merged elements back to the original array
            for (int i = left; i < right; i++) {
                arr[i] = temp[i];
            }
        }
    }

    // Output sorted array
    printf("Sorted array in ascending order:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
