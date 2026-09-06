//Q10) Write a program to input time in seconds and convert it to hours:minutes:seconds.

#include <stdio.h>

int main() {
    float totalSeconds, hour, minute, second;

    printf("Enter totalseconds: ");
    scanf("%f", &totalSeconds);

    hour = (int)totalSeconds / 3600;
    minute = ((int)totalSeconds % 3600) / 60;
    second = (int)totalSeconds % 60;

    printf("Hour: %.0f, Minute: %.0f, Second: %.0f\n", hour, minute, second);

    return 0;
}