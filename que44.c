//  Q44: Write a program to find the sum of the series:
//       1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>
int main() 
{
    int n, i;
   float num, den, t, s = 0;
    
    printf("Enter a number: ");
    scanf("%d", &n);

	for (i = 1; i <= n; i++) 
	{
        if (i == 1)
		{
            s += 1;
		}
        else
		{
            num=2*i-1;
		    den=2*i;
			t=num/den;
			s=s+t;
		}
    }
	printf("Sum of series = %f\n", s);
}