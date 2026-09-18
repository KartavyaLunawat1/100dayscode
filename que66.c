//Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int insertSorted(int arr[], int n, int capacity, int key) {
    if (n >= capacity) {
        return n;  // array is full, cannot insert
    }

    int i;
    // find the correct position and shift elements to the right
    for (i = n - 1; (i >= 0 && arr[i] > key); i--) {
        arr[i + 1] = arr[i];
    }

    arr[i + 1] = key;

    return n + 1;  // return new size
}

int main() {
    int capacity = 20;
    int arr[20] = {2, 5, 8, 12, 16, 23, 38};
    int n = 7;  // current number of elements
    int key;

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter element to insert: ");
    scanf("%d", &key);

    n = insertSorted(arr, n, capacity, key);

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}