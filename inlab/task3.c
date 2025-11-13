#include<stdio.h>
void swap(int *a,int * b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("a=%d b=%d",*a,*b);
}int main(){
    int a=2;
    int b=3;
    printf("a=%d b=%d",a,b);
    swap(&a,&b);
    printf("a=%d b=%d",a,b);
}