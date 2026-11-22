/*
 * UPES 100 Days of Code Challenge
 * Day 72 | Date: 20-October-2026
 * Section: File Handling
 * 
 * Question 122:
 * Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.
 */
#include <stdio.h>

int main() {
    FILE *fp = fopen("info.txt", "r");
    char line[256];

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}
