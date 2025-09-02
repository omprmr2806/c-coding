#include<stdio.h>
int main() {
    int length,width,area,perimeter;
    printf("enter length and width of rectangle:");
    scanf("%d%d", &length, &width);
    area=length*width;
    perimeter= 2*(length+width);
    printf("Area of rectangle: %d\n", area);
    printf("Perimeter of rectangle: %d\n", perimeter);
     return 0;
}
