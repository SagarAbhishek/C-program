#include<stdio.h>
 
 int LargestElement(int arr[],int length){
    int i,large=0;
      for(i=0;i<length;i++){
        if(arr[i]>large){
            large=arr[i];
        }
    }
    return large;
 } 

void main(){
    int a[]={1,20,30,40,500,6,3,1,900,50},result,d;
    d=(sizeof(a)/sizeof(a[0]));
    result=LargestElement(a,d);
    printf("The largest Element in the array: %d\n",result);
}