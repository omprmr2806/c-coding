#include<stdio.h>
int main(){
    float celsius, fahrenheit;
    printf("enter temperature in celsius:");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9/5) + 32;
    printf("Temperature in fahrenheit: %f\n", fahrenheit);
    return 0;

}