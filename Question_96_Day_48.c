/*
 * UPES 100 Days of Code Challenge
 * Day 48 | Date: 26-September-2026
 * Section: Strings
 * 
 * Question 96:
 * Reverse each word in a sentence without changing the word order.
 */
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], word[100];
    if (fgets(str, sizeof(str), stdin) == NULL) return 0;
    int wLen = 0;
    for (int i = 0; ; i++) {
        char ch = str[i];
        if (ch == ' ' || ch == '\n' || ch == '\r' || ch == '\0') {
            for (int j = wLen - 1; j >= 0; j--) printf("%c", word[j]);
            if (ch == ' ') printf(" ");
            wLen = 0;
            if (ch == '\0' || ch == '\n' || ch == '\r') break;
        } else {
            word[wLen++] = ch;
        }
    }
    printf("\n");
    return 0;
}
