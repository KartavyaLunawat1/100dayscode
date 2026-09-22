//Count characters in a string without using built-in length functions.
#include <stdio.h>

int countChars(char str[]) {
    int count = 0;
    while (str[count] != '\0') {   // loop until null terminator
        count++;
    }
    return count;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);   // reads string including spaces

    int length = countChars(str);
    printf("Number of characters = %d\n", length);

    return 0;
}