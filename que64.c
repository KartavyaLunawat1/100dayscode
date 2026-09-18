//Find the digit that occurs the most times in an integer number.
#include <stdio.h>
#include <math.h>

int main() {
    long long num;
    int count[10] = {0};  // to store frequency of digits 0-9

    printf("Enter an integer: ");
    scanf("%lld", &num);

    if (num < 0) {
        num = -num;  // handle negative numbers
    }

    if (num == 0) {
        count[0] = 1;
    }

    long long temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        count[digit]++;
        temp = temp / 10;
    }

    int maxCount = 0, maxDigit = 0;
    for (int i = 0; i <= 9; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("Digit that occurs most: %d (appears %d times)\n", maxDigit, maxCount);

    return 0;
}