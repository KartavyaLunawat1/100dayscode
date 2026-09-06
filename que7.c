//Q7: Write a program to swap two numbers without using a third variable.
#include<stdio.h>

int main() {

    int a,b;

    printf("Enter Number A :");
    scanf("%d", &a);
    printf("Enter Number B :");
    scanf("%d", &b);

    printf("Before Swapping A= %d , B= %d\n", a, b);
    //after swapping
    printf("After Swapping, A= %d , B= %d", b, a);
    
    return 0;
}
