// Q45) Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>

int main() {
    int n, k;
    float numerator, denominator, sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (k = 1; k <= n; k++) {
        numerator = 2 * k;
        denominator = 4 * k - 1;
        sum += numerator / denominator;
    }

    printf("Sum of the series up to %d terms = %.4f\n", n, sum);

    return 0;
}