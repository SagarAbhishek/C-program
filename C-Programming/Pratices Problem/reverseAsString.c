#include<stdio.h>
#include<string.h>
// printf("%s",strrev(c));

void main(){
    char c[50],count=0,temp;
    printf("Enter the string:");
    scanf("%s",&c);
    while (c[count]!='\0')
        count++;
    for(int i=0;i<((count-1)/2);i++){
        temp=c[i];
        c[i]=c[count-1-i];
        c[count-1-i]=temp;
    }
    printf("%s",c);
}