#include<stdio.h>
int main(){
    int sub1,sub2,sub3,total,average;
    printf("enter the sub1:");
    scanf("%d",&sub1);
    printf("enter the sub2:");
    scanf("%d",&sub2);
    printf("enter the sub3:");
    scanf("%d",&sub3);
    total=sub1+sub2+sub3;
    average=total/3;
    printf("total=%d",total);
    printf("\naverage=%d",average);

    return 0;
    
}