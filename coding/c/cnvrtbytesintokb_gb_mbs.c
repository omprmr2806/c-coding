#include<stdio.h>
int main(){
    float bytes,kb,mb,gb;
    printf("enter bytes value:");
    scanf("%f",&bytes);
    kb=bytes/1024;
    mb=kb/1024;
    gb=mb/1024;
    printf("\nkb value:%f",kb);
    printf("\nmb value:%f",mb);
    printf("\ngb value:%f",gb);
    return 0;
}