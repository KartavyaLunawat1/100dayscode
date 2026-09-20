//Find the second largest element in an array.
#include <stdio.h>

int main() {
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    if (n < 2) {
        printf("Need at least 2 elements to find second largest.\n");
        return 0;
    }

    int first = arr[0], second = -2147483648; // second starts at INT_MIN
    int foundSecond = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
            foundSecond = 1;
        } else if (arr[i] < first && (arr[i] > second || !foundSecond)) {
            second = arr[i];
            foundSecond = 1;
        }
    }

    if (foundSecond)
        printf("Second largest element is: %d\n", second);
    else
        printf("There is no second largest element (all elements are equal).\n");

    return 0;
}
