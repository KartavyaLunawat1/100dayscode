// Q40: Write a program to find the 1's complement of a binary number 

#include <stdio.h>
int main() 
{
    long long n;
    int d;

    printf("Enter a binary number: ");
    scanf("%lld", &n);

    if (n == 0) 
	{
        printf("1");
    }
	else 
	{
        while (n != 0) 
		{
            d = n % 10;

            if (d == 0) 
			{
                printf("1");
            } 
			else
			{
                printf("0");
            }

            n = n / 10;
        }
    }

    return 0;
}