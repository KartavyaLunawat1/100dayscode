/*
 * UPES 100 Days of Code Challenge
 * Day 68 | Date: 16-October-2026
 * Section: Logic Enhancers
 * 
 * Question 118:
 * Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
 */
#include <stdio.h>

int main() {
    int n, a[100], sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    int expected = n * (n + 1) / 2;
    printf("%d\n", expected - sum);
    return 0;
}
