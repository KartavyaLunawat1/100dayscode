/*
 * UPES 100 Days of Code Challenge
 * Day 44 | Date: 22-September-2026
 * Section: Strings
 * 
 * Question 88:
 * Replace spaces with hyphens in a string.
 */
#include <stdio.h>

int main() {
    char str[1000];
    if (fgets(str, sizeof(str), stdin) == NULL) return 0;
    for (int i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++) {
        if (str[i] == ' ') printf("-");
        else printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}
