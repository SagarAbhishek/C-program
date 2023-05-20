#include<stdio.h>
#include<math.h>

int prime(int num){
    int i,count=0;
    for(i=2;i<(sqrt(num));i++){
        if(num%i==0){
            count++;
        }
    }
    return count;
} 

void main(){
    int n,result;
    printf("enter the number: \n");
    scanf("%d",&n);
    result=prime(n);
    if(result){
        printf("%d is Non prime Number",n);
    }
    else{
        printf("%d is Prime number",n);
    }
}