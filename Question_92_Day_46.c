/*
 * UPES 100 Days of Code Challenge
 * Day 46 | Date: 24-September-2026
 * Section: Strings
 * 
 * Question 92:
 * Find the first repeating lowercase alphabet in a string.
 */
#include <stdio.h>

int main() {
    char str[1000];
    if (fgets(str, sizeof(str), stdin) == NULL) return 0;
    int count[26] = {0};
    for (int i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            count[str[i] - 'a']++;
            if (count[str[i] - 'a'] == 2) {
                printf("%c\n", str[i]);
                return 0;
            }
        }
    }
    printf("None\n");
    return 0;
}
