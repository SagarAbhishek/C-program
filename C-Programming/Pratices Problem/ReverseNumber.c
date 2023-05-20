#include<stdio.h>
int reverse(int num){
    int rev=0,rem;
    while(num){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    return rev;
}

void main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("The number is reverse order is: %d",reverse(n));

}