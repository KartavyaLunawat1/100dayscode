// Q43: Write a program to check if a number is a strong number.

#include <stdio.h>

int main() 
{
    int n, temp, d, s = 0, f, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (n != 0) 
	{
        d = n % 10;
		f=1;
        for (i = 1; i <= d; i++)
		{
            f *= i;
        }

        s += f;
        n /= 10;
    }

    if (s == temp)
        printf("%d is a Strong Number\n", temp);
    else
        printf("%d is not a Strong Number\n", temp);

    return 0;
}