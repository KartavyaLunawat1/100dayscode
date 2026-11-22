/*
 * UPES 100 Days of Code Challenge
 * Day 49 | Date: 27-September-2026
 * Section: Strings
 * 
 * Question 97:
 * Print the initials of a name.
 */
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    if (fgets(str, sizeof(str), stdin) == NULL) return 0;
    int newWord = 1;
    for (int i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++) {
        if (str[i] == ' ') {
            newWord = 1;
        } else if (newWord && isalpha(str[i])) {
            printf("%c.", toupper(str[i]));
            newWord = 0;
        }
    }
    printf("\n");
    return 0;
}
