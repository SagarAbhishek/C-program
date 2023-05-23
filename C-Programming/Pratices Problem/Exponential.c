#include<stdio.h>
#include<math.h>
void main(){
    int n,m,expo;
    double power=1;
    printf("Enter the Number:\n");
    scanf("%d",&n);
    printf("Enter the power Number:\n");
    scanf("%d",&m);
    expo=m;
    while(m){
        power=power*n;
        m--;
    }
    // printf("The power of the given number is %d of %d is %0.2lf",n,m,pow(n,m));
    printf("The power of the given number is %d of %d is %0.2lf",n,expo,power);

}