//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>

int main() {
    int x,y,sum, difference, product;
    float quotient;

    printf("Enter the value of x : ");
    scanf("%d", &x);
    printf("Enter the value of y : ");
    scanf("%d", &y);

    sum = x+y;
    difference = x-y;
    product = x*y;
    quotient = (float)x/y;
    
    printf(" Sum=%d\n Diff=%d\n Product=%d\n Quotient=%.2f", sum, difference, product, quotient);
    return 0;
}