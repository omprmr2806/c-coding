#include<stdio.h>
int main(){
    float p,r,n,i;
    printf("enter principal amount:");
    scanf("%f",&p);
    printf("enter rate of interest:");
    scanf("%f",&r);
    printf("enter time(in years):");
    scanf("%f",&n);
    i=(p*r*n)/100;
    printf("Simple Interest: %f\n",i);
    return 0;
}