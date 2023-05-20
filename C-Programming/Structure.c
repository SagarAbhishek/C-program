#include<stdio.h>
#include<string.h>

struct Books
{
    char name[20];
    int price;
    char author[20];
}book;
 void printStruct(struct Books bk1){

    printf(" book name is %s\n",bk1.name);
    printf("author name is %s\n",bk1.author);
    printf("price of books is %d",bk1.price);
 }


void main(){
    struct Books bk1;
    strcpy(bk1.name,"C programming");
    strcpy(bk1.author,"sagar");
    bk1.price=100;
    printStruct(bk1);
    


}