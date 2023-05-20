#include<stdio.h>

void newPrint(char* char1){
    printf("%s",char1);
} 

int sum(int a , int b){
    return a+b;
}
float avg(float a , float b){
    return (a+b)/2;
}


void main(){
    newPrint("Hello world\n");
    printf(" the sum of two given number is : %d\n",sum(5,6));
    printf(" the sum of two given number is : %0.2f",avg(5,6));

}