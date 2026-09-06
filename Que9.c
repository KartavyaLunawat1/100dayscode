//Q9) Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest, amount;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    /* Simple Interest = (P * R * T) / 100 */
    simpleInterest = (principal * rate * time) / 100;

    /* Compound Interest = P * (1 + R/100)^T - P */
    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;

    printf("\nSimple Interest = %.2f\n", simpleInterest);
    printf("Compound Interest = %.2f\n", compoundInterest);

    return 0;
}