#include<stdio.h>
#include<conio.h>
    void main() {
        int bs,da,hr;
       
        printf("enter the basic salary");
        scanf("%d",&bs);
        printf("enter the dearness allowance");
        scanf("%d",&da);
        hr=bs+da;
        printf("the total salary is %d",hr);
        getch();
    }