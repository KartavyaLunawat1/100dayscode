/*
 * UPES 100 Days of Code Challenge
 * Day 42 | Date: 20-September-2026
 * Section: Strings
 * 
 * Question 84:
 * Convert a lowercase string to uppercase without using built-in functions.
 */
#include <stdio.h>

int main() {
    char str[1000];
    if (fgets(str, sizeof(str), stdin) == NULL) return 0;
    for (int i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}
