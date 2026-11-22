/*
 * UPES 100 Days of Code Challenge
 * Day 61 | Date: 09-October-2026
 * Section: Logic Enhancers
 * 
 * Question 111:
 * Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
 */
#include <stdio.h>

int main() {
    int n, k, a[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &k);

    for (int i = 0; i <= n - k; i++) {
        int found = 0;
        for (int j = 0; j < k; j++) {
            if (a[i + j] < 0) {
                printf("%d ", a[i + j]);
                found = 1;
                break;
            }
        }
        if (!found) printf("0 ");
    }
    printf("\n");
    return 0;
}
