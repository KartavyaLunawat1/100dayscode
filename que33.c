// Write a program to check if a number is an Armstrong number.


#include<stdio.h>
int main()
{
   int n,d,s=0,c,temp;
    printf("Enter the value of n : ");
   scanf("%d", &n);
   temp=n;
   
   while(n!=0)
    {
      d=n%10;
      c=d*d*d;
	  s=s+c;
	  n=n/10;	  
    }
	if(s==temp)
	{
	printf("Armstrong Number");
	}
	else
	{
	printf("Not a armstrong number");
	}
	return 0;
}