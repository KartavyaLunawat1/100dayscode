// Write a program to print the following pattern:
// *****
//  ****
//   ***
//    **
//     *
#include <stdio.h>

int main() {
    int i, j, rows = 5;

    for (i = 1; i <= rows; i++) {
        // print leading spaces
        for (j = 1; j <= i - 1; j++) {
            printf(" ");
        }
        // print stars
        for (j = 1; j <= rows - i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}