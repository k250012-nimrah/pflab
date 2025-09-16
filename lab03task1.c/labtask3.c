#include<stdio.h>
int main(){
    int num1;
    printf("Enter an integer between 65 and 90 ");
    scanf("%d",&num1);
        if(num1>90 || num1<65){
            printf("The number entered is out of range");

        }
        else{
            printf("%d=%c",num1,num1);        }
}
