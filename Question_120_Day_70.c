/*
 * UPES 100 Days of Code Challenge
 * Day 70 | Date: 18-October-2026
 * Section: File Handling
 * 
 * Question 120:
 * Write a program to take a string input. Change it to sentence case.
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
            printf(" ");
        } else {
            if (newWord) {
                printf("%c", toupper(str[i]));
                newWord = 0;
            } else {
                printf("%c", tolower(str[i]));
            }
        }
    }
    printf("\n");
    return 0;
}
