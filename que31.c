// Q31: Write a program to take a number as input and print its
// equivalent binary representation.

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int flag = 0;

    // Iterate through all 32 bits of an integer, starting from the MSB
    for (int i = 31; i >= 0; i--) 
	{
        // Shift bit right, isolate it using bitwise AND
        int bit = (n >> i) & 1;

        if (bit == 1)
		{
            flag = 1; // Found the highest active bit
        }

        if (flag) 
		{
            printf("%d", bit);
        }
    }

    // If the number was 0, the loop won't print anything, so handle it here
    if (!flag) 
	{
        printf("0");
    }

    printf("\n");

    return 0;
}