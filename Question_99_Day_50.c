/*
 * UPES 100 Days of Code Challenge
 * Day 50 | Date: 28-September-2026
 * Section: Strings
 * 
 * Question 99:
 * Change the date format from dd/04/yyyy to dd-Apr-yyyy.
 */
#include <stdio.h>

int main() {
    int d, m, y;
    char *months[] = {"", "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    if (scanf("%d/%d/%d", &d, &m, &y) == 3) {
        if (m >= 1 && m <= 12) {
            printf("%02d-%s-%d\n", d, months[m], y);
        }
    }
    return 0;
}
