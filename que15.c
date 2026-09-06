//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include<stdio.h>

int main() {
    char ch;
    printf("Enter a Character :");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Uppercase Alphabet\n", ch);
    } 
    else if (ch >= 'a' && ch <= 'z')
    {
       printf("Lowercase Alphabet\n", ch);
    } 
    else if (ch >= '0' && ch <= '9')
    {
       printf("It is a Digit\n", ch);
    }
     else {
        printf("Special Character", ch);
    }
    
    return 0;
}