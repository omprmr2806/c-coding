#include<stdio.h>
int main()
{
    int hours, minutes;
    printf("Enter hours: ");
    scanf("%d", &hours);
    printf("Enter minutes: ");
    scanf("%d", &minutes);
    printf("Total minutes = %d\n", (hours * 60) + minutes);
}