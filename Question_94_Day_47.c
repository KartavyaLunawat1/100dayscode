/*
 * UPES 100 Days of Code Challenge
 * Day 47 | Date: 25-September-2026
 * Section: Strings
 * 
 * Question 94:
 * Find the longest word in a sentence.
 */
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], word[100], longest[100] = "";
    int maxLen = 0, wLen = 0;
    if (fgets(str, sizeof(str), stdin) == NULL) return 0;
    for (int i = 0; ; i++) {
        char ch = str[i];
        if (ch == ' ' || ch == '\n' || ch == '\r' || ch == '\0') {
            if (wLen > maxLen) {
                maxLen = wLen;
                word[wLen] = '\0';
                strcpy(longest, word);
            }
            wLen = 0;
            if (ch == '\0') break;
        } else {
            word[wLen++] = ch;
        }
    }
    printf("%s\n", longest);
    return 0;
}
