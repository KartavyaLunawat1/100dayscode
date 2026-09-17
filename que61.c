//Search for an element in an array using linear search.

#include <stdio.h>

int main() {
    int arr[] = {10, 25, 3, 47, 8, 19, 56};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key, found = 0;

    printf("Enter the element to search: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Element not found in the array\n");

    return 0;
}