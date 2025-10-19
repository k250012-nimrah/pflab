#include<stdio.h>
float main(){
    int marks1,marks2,marks3,total;
    float percentage;
    printf("Enter marks of first subject");
    scanf("%d",&marks1);
    printf("Enter marks of second subject");
    scanf("%d",&marks2);
    printf("Enter marks of third subject");
    scanf("%d",&marks3);
    total=marks1+marks2+marks3;
    percentage =(total/300.0)*100;
    printf("The percentage is= %.2f%%",percentage);


}