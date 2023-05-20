#include<stdio.h>
void main(){
    int n,d,num;
    printf("Enter the number in decimal:");
    scanf("%d",&n);
    num=n;
    int a[10],i=0;
    while(n){
        a[i]=n%2;
        n=n/2;
        i++;
    }
    printf("The %d in binary number is:\n",num);
    for (int j=i-1;j>=0;j--){
        printf("%d",a[j]);
    }
}