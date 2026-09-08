// Write a program to calculate electricity bill based on units consumed with these rates: 
// First 100 units at ₹5/unit 
// Next 100 units at ₹7/unit 
// Next 100 units at ₹10/unit 
// Above at ₹12/unit
#include<stdio.h>

int main() {

    int Unit;
    float sum;

    printf("Units Consumed : ");
    scanf("%d", &Unit);

    if (Unit <= 100) {
        sum = Unit * 5;
    } else if (Unit <= 200) {
        sum = 100 * 5 + (Unit - 100) * 7;
    } else if (Unit <= 300) {
        sum = 100 * 5 + 100 * 7 + (Unit - 200) * 10;
    } else {
        sum = 100 * 5 + 100 * 7 + 100 * 10 + (Unit - 300) * 12;
    }

    printf("Total Bill = %.2f\n", sum);
    return 0;
}