#include<stdio.h>

void main(){
    int n=4;
    for(int i=0;i<4;i++){
        for(int j=4-1;j>i;j--){
            printf("*");
        }
        printf(" \n");
    }
}