/*
 * UPES 100 Days of Code Challenge
 * Day 64 | Date: 12-October-2026
 * Section: Logic Enhancers
 * 
 * Question 114:
 * Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
 */
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    if (scanf("%s", s) != 1) return 0;

    int n = strlen(s);
    int maxLen = 0;

    for (int i = 0; i < n; i++) {
        int visited[256] = {0};
        for (int j = i; j < n; j++) {
            if (visited[(unsigned char)s[j]]) break;
            visited[(unsigned char)s[j]] = 1;
            int len = j - i + 1;
            if (len > maxLen) maxLen = len;
        }
    }

    printf("%d\n", maxLen);
    return 0;
}
