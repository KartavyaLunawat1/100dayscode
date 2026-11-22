/*
 * UPES 100 Days of Code Challenge
 * Day 54 | Date: 02-October-2026
 * Section: Logic Enhancers
 * 
 * Question 104:
 * Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
 */
#include <stdio.h>

int main() {
    int n, ans = -1;
    scanf("%d", &n);
    int total = n * (n + 1) / 2;
    for (int x = 1; x <= n; x++) {
        if (x * x == total) {
            ans = x;
            break;
        }
    }
    printf("%d\n", ans);
    return 0;
}
