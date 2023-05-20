#include<stdio.h>

void main(){
    int n,i;
printf("Enter the number which table you want:\n");
scanf("%d",&n);
printf("Table of given Number %d is below:\n",n);
for (i=1;i<=10;i++){
    printf("%d X %d = %d\n",n,i,(n*i));
}
}