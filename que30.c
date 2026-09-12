// Write a program to reverse a given number.

#include<stdio.h>
int main() {
   int n,d,r=0, temp;
    printf("Enter the value of n : ");
   scanf("%d", &n);
   temp=n;
   
   while(n!=0)
    {
      d=n%10;
      r=r*10+d;
	  n=n/10;	  
    }
	printf("Reverse is =%d", r);
	
}