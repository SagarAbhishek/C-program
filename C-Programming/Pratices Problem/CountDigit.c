#include<stdio.h>

void main(){
    int n,number,count=0;
    printf("Enter the Number:\n");
    scanf("%d",&n);
    number=n;
    while(n){
        n=n/10;
        count++;
    }
    printf("Number of digit in the given number %d is %d",number,count);
}