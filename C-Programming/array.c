#include<stdio.h>

void main(){
    char c[5];
    for (int i = 0; i <5; i++)
    {
        printf("enter the value in  char array for index %d:",i);
        scanf("%c",&c[i]);
    }
     for (int i = 0; i <5; i++)
    {
        printf("value in array is %c\n",c[i]);
    }
    


}