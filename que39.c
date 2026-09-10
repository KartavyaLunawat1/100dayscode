// Write a program to find the product of odd digits of a number.

#include <stdio.h>
int main()
{
    int n, i, d, pro=1;

    printf("Enter a number: ");
    scanf("%d", &n);
	
	while(n!=0)
	{
	d=n%10;
	if(d%2!=0)
	{
		pro*=d;
	}
	n=n/10;
	}
	  printf("Product is %d", pro);
}