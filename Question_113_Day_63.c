/*
 * UPES 100 Days of Code Challenge
 * Day 63 | Date: 11-October-2026
 * Section: Logic Enhancers
 * 
 * Question 113:
 * Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.
 */
#include <stdio.h>

int main() {
    int n, k, a[100], temp;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &k);

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("%d\n", a[k - 1]);
    return 0;
}
