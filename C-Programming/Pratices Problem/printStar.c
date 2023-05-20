#include<stdio.h>

void main(){
    int n=4;
    printf("enter the number: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for (int j=0;j<=i;j++){
            printf("*");

        }
        printf("\n");
    }
    
}