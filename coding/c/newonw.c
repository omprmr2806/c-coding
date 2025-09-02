#include<stdio.h>
#include<conio.h>
void main() {
    int x,y,z,w,sum,sumof1standlastnum,a;
    printf("enter the number");
    scanf("%d",&x);
    printf("enter the second number");
    scanf("%d",&y);
    printf("enter the third number");
    scanf("%d",&z);
    printf("enter the fourth number");
    scanf("%d",&w);
    printf("the sum is %d",x+y+z+w);
    sum=x+y+z+w;
    scanf("%d",&sum);

    a = x*y*z*w;
    printf("the product is %d",a);
    scanf("%d",&a);
    sumof1standlastnum=x+w;
    printf("sum of the first and last digits of the numbers which you have written",sumof1standlastnum);
    scanf("%d",&sumof1standlastnum);

    

}