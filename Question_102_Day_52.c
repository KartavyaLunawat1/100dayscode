/*
 * UPES 100 Days of Code Challenge
 * Day 52 | Date: 30-September-2026
 * Section: Logic Enhancers
 * 
 * Question 102:
 * Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
 */
#include <stdio.h>

int main() {
    int n, a[100], x, ans = -1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (a[i] >= x) {
            ans = i;
            break;
        }
    }
    printf("%d\n", ans);
    return 0;
}
