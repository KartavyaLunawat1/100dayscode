//Write a program to input three numbers and find the largest among them using if–else.
#include<stdio.h>

int main() {
    int a, b, c;

    printf("Enter Number A: ");
    scanf("%d", &a);
    printf("Enter Number B: ");
    scanf("%d", &b);
    printf("Enter Number C: ");
    scanf("%d", &c);

    if (a >= b && a>=c )
    {
      printf("%d is Greatest Number", a);
    } else if (b>=a && b>=c)
    {
        printf("%d Greatest Number", b);

    }else if (c>=a && b>=c)
    {
       printf("%d is Greatest Number", c);
    }


    return 0;
}