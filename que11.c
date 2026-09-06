//Q11: Write a program to input an integer and check whether it is even or odd using if–else.
#include<stdio.h>

int main() {
    int num;
    
    printf("Enter a Number:");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("Number is Even\n", num);
    }
    else {
        printf("Number is ODD\n", num);
    }

    



    return 0;
}