/*
 * UPES 100 Days of Code Challenge
 * Day 58 | Date: 06-October-2026
 * Section: Logic Enhancers
 * 
 * Question 108:
 * Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
 */
#include <stdio.h>

int main() {
    int n, a[100], ans[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    for (int i = 0; i < n; i++) {
        int prod = 1;
        for (int j = 0; j < n; j++) {
            if (i != j) prod *= a[j];
        }
        ans[i] = prod;
    }

    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", ans[i]);
        if (i < n - 1) printf(",");
    }
    printf("]\n");
    return 0;
}
