#include<stdio.h>

void main(){
    int n;
    printf("Enter the Number:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i<=j)
                    printf("*");
                else
                    printf(" "); 
            }
        printf("\n");
    }
}