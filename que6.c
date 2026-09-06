#include <stdio.h>

int main() {
    int a, b, c;

    // Take input from the user
    printf("Enter first number (a): ");
    scanf("%d", &a);
    printf("Enter second number (b): ");
    scanf("%d", &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping logic using a third variable (c)
    c = a;
    a = b;
    b = c;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}