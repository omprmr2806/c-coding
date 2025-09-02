#include<stdio.h>
    int main(){
        int a,b;
        printf("Enter 1st numbers: ");
        scanf("%d ", &a);
        printf("Enter 2nd numbers: ");
        scanf("%d ", &b);
        a=a+b;
        a=a-b;
        b=a-b;
        printf(" after swaping a=%d, b=%d",a,b);

        return 0;
    }
