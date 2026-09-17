//Count positive, negative, and zero elements in an array.

#include <stdio.h>

int main() {
    int arr[] = {1, -2, 3, 0, -5, 6, 0, -7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0)
            positiveCount++;
        else if (arr[i] < 0)
            negativeCount++;
        else
            zeroCount++;
    }

    printf("Positive numbers: %d\n", positiveCount);
    printf("Negative numbers: %d\n", negativeCount);
    printf("Zero elements: %d\n", zeroCount);

    return 0;
}
