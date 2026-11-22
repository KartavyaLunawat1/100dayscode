/*
 * UPES 100 Days of Code Challenge
 * Day 51 | Date: 29-September-2026
 * Section: Logic Enhancers
 * 
 * Question 101:
 * Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
 */
#include <stdio.h>

int main() {
    int n, a[100], target;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &target);

    int first = -1, last = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == target) {
            if (first == -1) first = i;
            last = i;
        }
    }
    printf("%d,%d\n", first, last);
    return 0;
}
