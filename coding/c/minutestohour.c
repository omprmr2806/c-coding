#include<stdio.h>
int main()
{
    int minutes, hours;
    printf("Enter minutes: ");
    scanf("%d", &minutes);
    hours = minutes / 60;
    minutes = minutes % 60;
    printf("Total time = %d hours and %d minutes\n", hours, minutes);
}