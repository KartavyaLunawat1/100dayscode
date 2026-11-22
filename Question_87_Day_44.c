/*
 * UPES 100 Days of Code Challenge
 * Day 44 | Date: 22-September-2026
 * Section: Strings
 * 
 * Question 87:
 * Count spaces, digits, and special characters in a string.
 */
#include <stdio.h>

int main() {
    char str[1000];
    if (fgets(str, sizeof(str), stdin) == NULL) return 0;
    int spaces = 0, digits = 0, special = 0;
    for (int i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++) {
        if (str[i] == ' ') spaces++;
        else if (str[i] >= '0' && str[i] <= '9') digits++;
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            // alphabet
        } else {
            special++;
        }
    }
    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);
    return 0;
}
