/*
 * UPES 100 Days of Code Challenge
 * Day 53 | Date: 01-October-2026
 * Section: Logic Enhancers
 * 
 * Question 103:
 * Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.
 */
#include <stdio.h>

int main() {
    int n, a[100], total = 0, left = 0, pivot = -1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        total += a[i];
    }
    for (int i = 0; i < n; i++) {
        if (left == total - left - a[i]) {
            pivot = i;
            break;
        }
        left += a[i];
    }
    printf("%d\n", pivot);
    return 0;
}
