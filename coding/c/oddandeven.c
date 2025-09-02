#include<stdio.h>
#include<conio.h>

void main() {
    int num,x,y;
    printf("enter the number");
    scanf("%d",&num);
    x=num%2==0;
    y=num%2;
    if(x==1)
    printf("number is even");
    else
    printf("number is odd");

}
    