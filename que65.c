//Search in a sorted array using binary search.
#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;  // found, return index
        }
        else if (arr[mid] < target) {
            low = mid + 1;  // search right half
        }
        else {
            high = mid - 1;  // search left half
        }
    }

    return -1;  // not found
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 72, 91};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Enter number to search: ");
    scanf("%d", &target);

    int result = binarySearch(arr, size, target);

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}