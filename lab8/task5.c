#include <stdio.h>

int main() {
    int marks[5][4];
    int i,j;
    float studentAvg[5];
    int subjectMax[4];
    printf("Enter marks for 5 students in 4 subjects:\n");
    for(i=0;i<5;i++){
        printf("Student %d: ",i+1);
        for(j=0;j<4;j++){
            scanf("%d",&marks[i][j]);
        }
    }
    for(i=0;i<5;i++){
        int sum=0;
        for(j=0;j<4;j++){
            sum+=marks[i][j];
        }
        studentAvg[i]=sum/4.0;
    }
    for(j=0;j<4;j++){
        subjectMax[j]=marks[0][j];
        for(i=1;i<5;i++){
            if(marks[i][j]>subjectMax[j]){
                subjectMax[j]=marks[i][j];
            }
        }
    }
    printf("\nAverage marks of each student: [");
    for(i=0;i<5;i++){
        printf("%.2f",studentAvg[i]);
        if(i<4)printf(", ");
    }
    printf("]\n");
    printf("Highest marks in each subject: [");
    for(j=0;j<4;j++){
        printf("%d",subjectMax[j]);
        if(j<3)printf(", ");
    }
    printf("]\n"); 
    return 0;
}