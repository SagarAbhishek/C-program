#include<stdio.h>
void main(){
    int a=4,b=2;
    //arthimetic operator
    printf("The sum of number %d and %d is : %d\n ",a,b,a+b);
    printf("The difference of number %d and %d is : %d\n ",a,b,a-b);
    printf("The multiply of number %d and %d is : %d\n ",a,b,a*b);
    printf("The divide of number %d and %d is : %d\n ",a,b,a/b);
    printf("The module of number %d and %d is : %d\n ",a,b,a%b);
    printf("The increment of number %d is : %d\n ",a,++a);
    printf("The decrement of number %d is: %d\n ",b,--b);

    //bitwise operator
    int A=10, B=2;
    printf("Bitwise AND operator returned: %d\n",A&B);
    printf("Bitwise OR operator returned: %d\n",A|B);
    printf("Bitwise X-OR operator returned: %d\n",A^B);
    printf("Bitwise ones complement operator returned: %d\n",~B);
    printf("Bitwise left shift operator returned: %d\n",A<<B);
    printf("Bitwise right shift operator returned: %d\n",A>>B);








}