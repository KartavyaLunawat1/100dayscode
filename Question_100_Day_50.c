/*
 * UPES 100 Days of Code Challenge
 * Day 50 | Date: 28-September-2026
 * Section: Strings
 * 
 * Question 100:
 * Print all sub-strings of a string.
 */
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    if (scanf("%s", str) != 1) return 0;
    int len = strlen(str);
    int first = 1;
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            if (!first) printf(",");
            for (int k = i; k <= j; k++) printf("%c", str[k]);
            first = 0;
        }
    }
    printf("\n");
    return 0;
}
