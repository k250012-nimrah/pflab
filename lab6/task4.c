#include <stdio.h>
int main() {
    int marks,count=0,sum=0;
    float average;
    printf("Enter marks one by one (-1 to stop):\n");
    while(1){
        scanf("%d",&marks);
        if(marks==-1){
            break;
        }
        sum+=marks;
        count++;
    }
    if(count>0){
        average=(float)sum/count;
        printf("Average marks: %.2f\n",average);
    }else{
        printf("No marks entered.\n");
    } 
    return 0;
}