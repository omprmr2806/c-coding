#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the first num:");
    scanf("%d",&a);
    printf("enter the second num:");
    scanf("%d",&b);
    printf("enter the third num:");
    scanf("%d",&c);
    if (a>b && a>c) {
        printf("a is largest");
    }
    else if(b>a && b>c){
        printf("b is largest");
    }
    else{
        printf("c is largest");
    }
}
