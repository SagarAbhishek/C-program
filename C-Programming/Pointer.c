#include<stdio.h>

void main(){
    int a=98;
    printf("%d\n",a);
    int* ptr=NULL;
    ptr=&a;
    *ptr=988;
    printf("%d",a);
    
}