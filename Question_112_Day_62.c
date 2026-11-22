/*
 * UPES 100 Days of Code Challenge
 * Day 62 | Date: 10-October-2026
 * Section: Logic Enhancers
 * 
 * Question 112:
 * Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
 */
#include <stdio.h>

int main() {
    int n, a[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    int max_so_far = a[0];
    int curr_max = a[0];

    for (int i = 1; i < n; i++) {
        curr_max = (a[i] > curr_max + a[i]) ? a[i] : curr_max + a[i];
        if (curr_max > max_so_far) max_so_far = curr_max;
    }

    printf("%d\n", max_so_far);
    return 0;
}
