#include<stdio.h>
void main(){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    // if(age<18)
    //     printf("You cannot drive");
    // else if(age>=18 && age<=24)
    //     printf("you can drive but be careful");
    // else
    //     printf("you can drive as fast as possible");
    // int price=age>18?90000:65000;
    // printf("%d",price);
    int index=0;
    while(index<10){
        printf("%d\n",index);
        index++;
    }
    for (int i=0;i<10;i++){
        printf("%d\t",i);
    }
    int i=0;
    do{
        printf("do while is running: %d\n",i);
        i++;

    }while (i<=10);

    
}