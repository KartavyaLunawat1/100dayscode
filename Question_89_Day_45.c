/*
 * UPES 100 Days of Code Challenge
 * Day 45 | Date: 23-September-2026
 * Section: Strings
 * 
 * Question 89:
 * Count frequency of a given character in a string.
 */
#include <stdio.h>

int main() {
    char str[1000], ch;
    if (fgets(str, sizeof(str), stdin) == NULL) return 0;
    scanf(" %c", &ch);
    int count = 0;
    for (int i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++) {
        if (str[i] == ch) count++;
    }
    printf("%d\n", count);
    return 0;
}
