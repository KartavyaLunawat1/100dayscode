/*
 * UPES 100 Days of Code Challenge
 * Day 69 | Date: 17-October-2026
 * Section: Logic Enhancers
 * 
 * Question 119:
 * Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
 */
#include <stdio.h>

int main() {
    int n, a[100];
    scanf("%d", &n);
    int seen[1000] = {0};
    int ans = -1;

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] >= 0 && a[i] < 1000) {
            if (seen[a[i]]) {
                ans = a[i];
            }
            seen[a[i]] = 1;
        }
    }

    printf("%d\n", ans);
    return 0;
}
