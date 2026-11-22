/*
 * UPES 100 Days of Code Challenge
 * Day 59 | Date: 07-October-2026
 * Section: Logic Enhancers
 * 
 * Question 109:
 * Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
 */
#include <stdio.h>

int main() {
    int n, k, a[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &k);

    int cur = 0;
    for (int i = 0; i < k; i++) cur += a[i];
    int max = cur;

    for (int i = k; i < n; i++) {
        cur += a[i] - a[i - k];
        if (cur > max) max = cur;
    }

    printf("%d\n", max);
    return 0;
}
