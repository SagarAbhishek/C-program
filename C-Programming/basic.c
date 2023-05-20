#include<stdio.h>
int main(){


    //compiler will ignore this
    /*
    this is multiline comment
    */
   int a=7;
   float b=8.0;
   char c='t';
   printf("%d\n",a);
   printf("%0.2f\n",b);
   printf("%c\n",c);
   printf("helllo\n");
   printf("The size of int is %d\n",sizeof(int));
   printf("The size of unsigned int is %d\n",sizeof(unsigned int));
   printf("The size of signed int is %d\n",sizeof(signed int));
   printf("The size of float is %d\n",sizeof(float));
   printf("The size of double is %d\n",sizeof(double));
   printf("The size of long double is %d\n",sizeof(long double));
   printf("The size of char is %d\n",sizeof(char));
   printf("The size of unsigned char is %d\n",sizeof(unsigned char));
   printf("The size of signed char is %d\n",sizeof(signed char));
   printf("The size of short is %d\n",sizeof(short));
    return 0;
}