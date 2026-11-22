/*
 * UPES 100 Days of Code Challenge
 * Day 49 | Date: 27-September-2026
 * Section: Strings
 * 
 * Question 98:
 * Print initials of a name with the surname displayed in full.
 */
#include <stdio.h>
#include <ctype.h>

int main() {
    char words[20][50];
    int count = 0;
    while (scanf("%s", words[count]) == 1) {
        count++;
    }
    for (int i = 0; i < count - 1; i++) {
        printf("%c.", toupper(words[i][0]));
    }
    if (count > 1) printf(" ");
    if (count > 0) printf("%s\n", words[count - 1]);
    return 0;
}
