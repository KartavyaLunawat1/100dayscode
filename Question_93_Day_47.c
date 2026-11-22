/*
 * UPES 100 Days of Code Challenge
 * Day 47 | Date: 25-September-2026
 * Section: Strings
 * 
 * Question 93:
 * Check if two strings are anagrams of each other.
 */
#include <stdio.h>

int main() {
    char s1[1000], s2[1000];
    if (scanf("%s %s", s1, s2) != 2) return 0;
    int count[256] = {0};
    for (int i = 0; s1[i]; i++) count[(unsigned char)s1[i]]++;
    for (int i = 0; s2[i]; i++) count[(unsigned char)s2[i]]--;
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            printf("Not anagrams\n");
            return 0;
        }
    }
    printf("Anagrams\n");
    return 0;
}
