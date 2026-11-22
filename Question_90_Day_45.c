/*
 * UPES 100 Days of Code Challenge
 * Day 45 | Date: 23-September-2026
 * Section: Strings
 * 
 * Question 90:
 * Toggle case of each character in a string.
 */
#include <stdio.h>

int main() {
    char str[1000];
    if (fgets(str, sizeof(str), stdin) == NULL) return 0;
    for (int i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') str[i] -= 32;
        else if (str[i] >= 'A' && str[i] <= 'Z') str[i] += 32;
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}
