//Print each character of a string on a new line.
#include <stdio.h>

void printChars(char str[]) {
    int i = 0;
    while (str[i] != '\0') {   // loop until null terminator
        printf("%c\n", str[i]);
        i++;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);   // reads string including spaces

    printChars(str);

    return 0;
}