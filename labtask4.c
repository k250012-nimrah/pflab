#include<stdio.h>
float main(){
    float salary,HRA,DA,gross;
    printf("enter salary: ");
    scanf("%f",&salary);
    HRA=salary*0.10;
    DA=salary*0.05;
    gross=salary+HRA+DA;
    printf("The gross salary = %.2f%%",gross);

    }