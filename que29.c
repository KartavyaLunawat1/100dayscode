//Q29: Write a program to calculate the factorial of a number.
#include<stdio.h>
int main()
{
    int n, i;
    int f = 1;  

    printf("Enter the value of n non negative : ");
    scanf("%d", &n);

        for (i = 1; i <= n; i++)
        {
            f = f * i;
        }
        printf("Factorial of %d = %5d\n", n, f);
  
    return 0;
}