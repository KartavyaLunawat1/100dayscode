//Count even and odd numbers in an array.

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) evenCount++;
        else oddCount++;
    }

    printf("Even: %d, Odd: %d\n", evenCount, oddCount);
    return 0;
}