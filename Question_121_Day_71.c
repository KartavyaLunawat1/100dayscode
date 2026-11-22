/*
 * UPES 100 Days of Code Challenge
 * Day 71 | Date: 19-October-2026
 * Section: File Handling
 * 
 * Question 121:
 * Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.
 */
#include <stdio.h>

int main() {
    char name[100];
    int age;
    FILE *fp;

    scanf("%s %d", name, &age);

    fp = fopen("info.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "Name: %s\nAge: %d\n", name, age);
    fclose(fp);

    printf("File created successfully! Data written to info.txt\n");
    return 0;
}
