#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    int hall[rows][cols];
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            hall[i][j]=rand()%2;
        }
    }
    printf("\nSeating Arrangement (0=Empty, 1=Occupied):\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("%d ", hall[i][j]);
        }
        printf("\n");
    }  
    // Count available seats and find row with most empty seats
    int totalEmpty=0;
    int maxEmptyRow=0,maxEmptyCount=0;
    for(i=0;i<rows;i++){
        int rowEmpty = 0;
        for(j=0;j<cols;j++){
            if(hall[i][j]==0) {
                totalEmpty++;
                rowEmpty++;
            }
        }
        if(rowEmpty>maxEmptyCount) {
            maxEmptyCount=rowEmpty;
            maxEmptyRow=i+1; // +1 for 1-based indexing
        }
    }    
printf("\nTotal Available Seats: %d\n", totalEmpty);
printf("Row with Most Empty Seats: Row %d(%d empty seats)\n",maxEmptyRow,maxEmptyCount);
    return 0;
}