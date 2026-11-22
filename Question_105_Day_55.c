/*
 * UPES 100 Days of Code Challenge
 * Day 55 | Date: 03-October-2026
 * Section: Logic Enhancers
 * 
 * Question 105:
 * Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
 */
#include <stdio.h>

int main() {
    int n, a[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    int ans = -1;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] == a[i]) count++;
        }
        if (count > n / 2) {
            ans = a[i];
            break;
        }
    }
    printf("%d\n", ans);
    return 0;
}
