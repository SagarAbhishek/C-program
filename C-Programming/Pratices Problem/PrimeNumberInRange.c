#include<stdio.h>
#include<math.h>

int prime(int num){
    int i;
    for(i=2;i<=sqrt(num);i++){
        if(num%i==0)
            return 0;
    }
}

void main(){
    int n1,n2,i=0;
    printf("Enter the first number: \n");
    scanf("%d",&n1);
    printf("Enter the Second number: ");
    scanf("%d",&n2);
    for(i=n1;i<=n2;i++)
    {
        if(prime(i)){
            printf("%d\n",i);
        }
    }
}