//Write a program to display the day of the week based on a number (1–7) using switch-case.
#include<stdio.h>

int main() {
    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);

    switch (num)
    {
    case 1 : 
     printf("Sunday");
        break;
    case 2 :
     printf("Monday"); 
     break;
     case 3 :
     printf("Tuesday"); 
     break;
     case 4 :
     printf("Wednesday");
     break; 
     case 5 :
     printf("Thursday");
     break;  
     case 6 :
     printf("Friday"); 
     break;
     case 7 :
     printf("Saturday");
     break; 
    
    default:
     printf("Invalid input, Enter a number between 1 and 7.\n");
        break;
    }

    return 0;
}