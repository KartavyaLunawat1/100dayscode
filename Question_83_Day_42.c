/*
 * UPES 100 Days of Code Challenge
 * Day 42 | Date: 20-September-2026
 * Section: Strings
 * 
 * Question 83:
 * Count vowels and consonants in a string.
 */
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    if (fgets(str, sizeof(str), stdin) == NULL) return 0;
    int v = 0, c = 0;
    for (int i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++) {
        char ch = tolower(str[i]);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') v++;
            else c++;
        }
    }
    printf("Vowels=%d, Consonants=%d\n", v, c);
    return 0;
}
