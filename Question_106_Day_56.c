/*
 * UPES 100 Days of Code Challenge
 * Day 56 | Date: 04-October-2026
 * Section: Logic Enhancers
 * 
 * Question 106:
 * Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.
 */
#include <stdio.h>

int main() {
    int n, a[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    for (int i = 0; i < n; i++) {
        int nge = -1;
        for (int j = i + 1; j < n; j++) {
            if (a[j] > a[i]) {
                nge = a[j];
                break;
            }
        }
        printf("%d", nge);
        if (i < n - 1) printf(", ");
    }
    printf("\n");
    return 0;
}
