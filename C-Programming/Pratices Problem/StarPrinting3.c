#include<stdio.h>

void main(){
    int n;
      printf("Enter the Number:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<((2*n));j++){
            if(j>=(n-1-i) && j<=(n-1+i)){
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}