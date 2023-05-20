#include<stdio.h>
#include<string.h>

void main(){
    char name[6]={'s','a','g','a','r','\0'};
    char str1[54],str2[40];
    printf("%s\n",name);
    strcpy(str1,"abhishek");
    strcpy(str2,"gupta");
    // strcat(str1,str2);
    printf("%s\n",str1);
    printf("%s\n",str2);
    printf("%d",strcmp(str1,str2));


}