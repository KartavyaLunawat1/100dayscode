<<<<<<< HEAD
//  Q42: Write a program to check if a number is a perfect number.

#include <stdio.h>

int main() 
{
    int n, i, s = 0;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for (i = 1; i < n; i++) 
	{   
        if (n % i == 0) 
		{
            s = s + i;
        }
    }
    
    if (s == n)
        printf("Perfect Number");
    else
        printf("Not a perfect Number");
    
    return 0;
=======
//  Q42: Write a program to check if a number is a perfect number.

#include <stdio.h>

int main() 
{
    int n, i, s = 0;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for (i = 1; i < n; i++) 
	{   
        if (n % i == 0) 
		{
            s = s + i;
        }
    }
    
    if (s == n)
        printf("Perfect Number");
    else
        printf("Not a perfect Number");
    
    return 0;
>>>>>>> 8b054e23636c30262d3b945dd53f83b037fa15ba
}