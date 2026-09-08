//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>

int main() {
    char op;
    double num1, num2, result;

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("Result = %.2f\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result = %.2f\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result = %.2f\n", result);
            break;

        case '/':
            if (num2 == 0) {
                printf("Division by zero is not allowed.\n");
            } else {
                result = num1 / num2;
                printf("Result = %.2f\n", result);
            }
            break;

        case '%':
            if ((int)num2 == 0) {
                printf("Modulo by zero is not allowed.\n");
            } else {
                result = (int)num1 % (int)num2;
                printf("Result = %.2lf\n", result);
            }
            break;

        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}