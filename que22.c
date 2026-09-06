//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>

int main()   {
    float cp, sp, percent;

    printf("Enter Cost Price: ");
    scanf("%f", &cp);

    printf("Enter Selling Price: ");
    scanf("%f", &sp);

    percent = ((sp - cp) / cp) * 100;

    if (percent > 0)
        printf("Profit Percentage = %.2f\n", percent);
    else if (percent < 0)
        printf("Loss Percentage = %.2f\n", -percent);
    else
        printf("No Profit, No Loss\n");

    return 0;
}