// Write a program to print the following pattern:

// *

// *
// *
// *

// *
// *
// *
// *
// *

// *
// *
// *

// *
#include <stdio.h>

void printBlock(int n) {
    int i;
    printf("\n");                 // blank line before block
    for (i = 1; i <= n; i++) {
        printf("*\n");             // one star per line
    }
}

int main() {
    int sizes[] = {1, 3, 5, 3, 1};
    int numBlocks = 5, i;

    for (i = 0; i < numBlocks; i++) {
        printBlock(sizes[i]);
    }

    return 0;
}