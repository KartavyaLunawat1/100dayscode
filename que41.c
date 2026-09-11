// Q41: Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Count number of digits
    digits = (int)log10(num) + 1;

    // Find last digit
    lastDigit = num % 10;

    // Find first digit
    firstDigit = num / (int)pow(10, digits - 1);

    // Remove first digit and last digit, then rebuild the number
    result = num - (firstDigit * (int)pow(10, digits - 1)) - lastDigit;
    result = result + (lastDigit * (int)pow(10, digits - 1)) + firstDigit;

    printf("Original number: %d\n", num);
    printf("Number after swapping first and last digit: %d\n", result);

    return 0;
}