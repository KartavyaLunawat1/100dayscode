/*
 * UPES 100 Days of Code Challenge
 * Day 60 | Date: 08-October-2026
 * Section: Logic Enhancers
 * 
 * Question 110:
 * Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
 */
#include <stdio.h>

int main() {
    int n, k, a[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &k);

    for (int i = 0; i <= n - k; i++) {
        int max = a[i];
        for (int j = 1; j < k; j++) {
            if (a[i + j] > max) max = a[i + j];
        }
        printf("%d ", max);
    }
    printf("\n");
    return 0;
}
