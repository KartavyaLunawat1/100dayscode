//Write a program to print the sum of the first n odd numbers.
#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int oddNum = 2 * i - 1;   // generates 1, 3, 5, 7, ...
        sum += oddNum;
    }

    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}